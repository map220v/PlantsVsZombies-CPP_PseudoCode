// Class: Sexy::SexyRay2


/* Sexy::SexyRay2::SexyRay2(Sexy::SexyVector2 const&, Sexy::SexyVector2 const&) */

void __thiscall Sexy::SexyRay2::SexyRay2(SexyRay2 *this,SexyVector2 *param_1,SexyVector2 *param_2)

{
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = *(undefined8 *)param_2;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x10));
  *(float *)(this + 0x10) = 1.0 / *(float *)(this + 8);
  *(uint *)(this + 0x18) = (uint)(1.0 / *(float *)(this + 8) < 0.0);
  *(float *)(this + 0x14) = 1.0 / *(float *)(this + 0xc);
  *(uint *)(this + 0x1c) = (uint)(1.0 / *(float *)(this + 0xc) < 0.0);
  return;
}

