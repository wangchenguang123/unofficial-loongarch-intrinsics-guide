for (int i = 0; i < 1; i++) {
  dst.qword[i] =
      (u128)(u64)b.dword[2 * i] * (u128)(u64)c.dword[2 * i] + (u128)a.qword[i];
}
