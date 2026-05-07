// Class: HesitationBuffer


/* HesitationBuffer::HesitationBuffer() */

void __thiscall HesitationBuffer::HesitationBuffer(HesitationBuffer *this)

{
  Sexy::PerfTimer::PerfTimer((PerfTimer *)(this + 8));
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  this[0x28] = (HesitationBuffer)0x1;
  this[0x29] = (HesitationBuffer)0x0;
  return;
}

