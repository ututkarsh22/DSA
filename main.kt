fun main() {
    val t = readLine()!!.toInt()
    repeat(t) {
        val (x, y) = readLine()!!.split(" ").map { it.toInt() }
        println("${minOf(x, y)} ${maxOf(x, y)}")
    }
}