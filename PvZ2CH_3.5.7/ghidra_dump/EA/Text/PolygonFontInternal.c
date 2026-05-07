// Class: EA::Text::PolygonFontInternal


/* EA::Text::PolygonFontInternal::ReadFromBigEndianUint16(void const*) */

undefined2 EA::Text::PolygonFontInternal::ReadFromBigEndianUint16(void *param_1)

{
  return CONCAT11(*(undefined1 *)param_1,*(undefined1 *)((long)param_1 + 1));
}


/* EA::Text::PolygonFontInternal::ReadFromBigEndianUint32(void const*) */

uint EA::Text::PolygonFontInternal::ReadFromBigEndianUint32(void *param_1)

{
  return (uint)*(byte *)((long)param_1 + 1) << 0x10 | (uint)*(byte *)param_1 << 0x18 |
         (uint)*(byte *)((long)param_1 + 3) | (uint)*(byte *)((long)param_1 + 2) << 8;
}


/* EA::Text::PolygonFontInternal::ReadFromBigEndianFloat(void const*) */

undefined4 EA::Text::PolygonFontInternal::ReadFromBigEndianFloat(void *param_1)

{
  undefined4 uVar1;
  
  uVar1 = ReadFromBigEndianUint32(param_1);
  return uVar1;
}

