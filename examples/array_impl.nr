impl<T, N> [T; N] {
    #[builtin(array_len)]
    fn len(_array: Self) -> comptime Field {}

    #[builtin(arraysort)]
    fn sort(_array: Self) -> Self {}

    fn sort_via(mut a: Self, ordering: fn(T, T) -> bool) -> Self {
        for i in 1 .. a.len() {
            for j in 0..i {
                if ordering(a[i], a[j]) {
                    let old_a_j = a[j];
                    a[j] = a[i];
                    a[i] = old_a_j;
                }
            }
        }
        a
    }
}
