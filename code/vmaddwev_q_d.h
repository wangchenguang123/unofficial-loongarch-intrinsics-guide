for (int i = 0; i < 1; i++) {
  dst.qword[i] =
      (s128)(s64)b.dword[2 * i] * (s128)(s64)c.dword[2 * i] + (s128)a.qword[i];
}
