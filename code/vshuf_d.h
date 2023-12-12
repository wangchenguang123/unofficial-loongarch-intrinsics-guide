for (int i = 0; i < 2; i++) {
  if ((a.dword[i] % 256) >= 64) {
    // Caveat: observed in 3C5000, but not in QEMU
    dst.dword[i] = 0;
  } else if ((a.dword[i] % 4) < 2) {
    dst.dword[i] = c.dword[a.dword[i] % 2];
  } else {
    dst.dword[i] = b.dword[a.dword[i] % 2];
  }
}