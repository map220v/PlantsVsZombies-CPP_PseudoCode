// Class: CursorAnimEffectData


/* CursorAnimEffectData::CursorAnimEffectData(PopAnimRig*, Sexy::SexyVector2 const&,
   Sexy::SexyVector2 const&) */

void __thiscall
CursorAnimEffectData::CursorAnimEffectData
          (CursorAnimEffectData *this,PopAnimRig *param_1,SexyVector2 *param_2,SexyVector2 *param_3)

{
  *(undefined8 *)(this + 8) = *(undefined8 *)param_2;
  *(PopAnimRig **)this = param_1;
  *(undefined8 *)(this + 0x10) = *(undefined8 *)param_3;
  return;
}

