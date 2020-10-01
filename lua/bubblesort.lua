local array = {1,2,0,0,3,1,2}

function swap(a, b, table)

    if table[a] == nil or table[b] == nil then
        return false
    end

    if table[a] > table[b] then
        table[a], table[b] = table[b], table[a]
        return true
    end

    return false

end


function bubblesort(array)

    for i=1,table.maxn(array) do

        local ci = i
        ::redo::
        if swap(ci, ci+1, array) then
            ci = ci - 1
            goto redo
        end
    end
end

bubblesort(array)

for k, v in pairs(array) do
    print(k, " ", v)
end
