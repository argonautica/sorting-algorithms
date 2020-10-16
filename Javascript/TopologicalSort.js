function tsort(edges) {
    let nodes   = {}, // hash: stringified id of the node => { id: id, afters: lisf of ids }
        sorted  = [], // sorted list of IDs ( returned value )
        visited = {}; // hash: id of already visited node => true
  
    let Node = function(id) {
      this.id = id;
      this.afters = [];
    }
  
    edges.forEach(function(v) {
      let from = v[0], to = v[1];
      if (!nodes[from]) nodes[from] = new Node(from);
      if (!nodes[to]) nodes[to]     = new Node(to);
      nodes[from].afters.push(to);
    });
  
    // Main topological sort happens here
    Object.keys(nodes).forEach(function visit(idstr, ancestors) {
      let node = nodes[idstr],
          id   = node.id;
  
      // if already exists, do nothing
      if (visited[idstr]) return;
  
      if (!Array.isArray(ancestors)) ancestors = [];
  
      ancestors.push(id);
  
      visited[idstr] = true;
  
      node.afters.forEach(function(afterID) {
        if (ancestors.indexOf(afterID) >= 0)  // if already in ancestors, a closed chain exists.
          throw new Error('closed chain : ' +  afterID + ' is in ' + id);
  
        visit(afterID.toString(), ancestors.map(function(v) { return v })); // recursive call
      });
  
      sorted.unshift(id);
    });
  
    return sorted;
  }