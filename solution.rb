
n = nil
n = gets.to_i
until n == 0
  perm = [nil]*n
  n.times do |i|
    a = gets.to_i
    index = perm.map.with_index { |value, index| index if value.nil? }.compact[a]
    perm[index] = i+1
  end
  puts perm.join(',')
  n = gets.to_i
end
