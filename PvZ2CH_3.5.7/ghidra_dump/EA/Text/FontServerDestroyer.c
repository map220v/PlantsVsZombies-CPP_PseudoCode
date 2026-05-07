// Class: EA::Text::FontServerDestroyer


/* EA::Text::FontServerDestroyer::~FontServerDestroyer() */

void __thiscall EA::Text::FontServerDestroyer::~FontServerDestroyer(FontServerDestroyer *this)

{
  if (DAT_06bc5400 != (Font *)0x0) {
    if (DAT_06bc5400 == DAT_06bc53f0) {
      DAT_06bc53f0 = (Font *)0x0;
    }
    (**(code **)(*(long *)DAT_06bc5400 + 0x28))();
    Allocator::detail::DeleteObject<EA::Text::Font>(gpCoreAllocator,DAT_06bc5400);
    DAT_06bc5400 = (Font *)0x0;
  }
  return;
}

