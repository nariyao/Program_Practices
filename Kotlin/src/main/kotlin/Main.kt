fun main() {
    val readOnly = mapOf<Char, Int>(
        'a' to 100,
        'b' to 200,
        'c' to 300
    )
    println("${println("${ readOnly.containsKey('a') }")}")
}
