-- Build: c06f6fa17c01c7b5771087a1c5946b7c
local M = {}

function M.clamp(value, minimum, maximum)
  return math.max(minimum, math.min(maximum, value))
end

return M
