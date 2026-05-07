// Class: LineBatcher


/* LineBatcher::DrawItem(Sexy::Graphics*, LineEntry*) */

void __thiscall LineBatcher::DrawItem(LineBatcher *this,Graphics *param_1,LineEntry *param_2)

{
  Sexy::Graphics::SetColor(param_1,(Color *)(param_2 + 0x10));
  Sexy::Graphics::DrawLine
            (param_1,*(float *)param_2,*(float *)(param_2 + 4),*(float *)(param_2 + 8),
             *(float *)(param_2 + 0xc));
  return;
}


/* LineBatcher::Add(float, float, float, float, Sexy::Color, float) */

void __thiscall
LineBatcher::Add(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,LineBatcher *this,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)Batcher<LineEntry>::add((Batcher<LineEntry> *)this);
  if (puVar2 != (undefined4 *)0x0) {
    uVar1 = param_7[1];
    *(undefined8 *)(puVar2 + 4) = *param_7;
    *(undefined8 *)(puVar2 + 6) = uVar1;
    *puVar2 = param_1;
    puVar2[1] = param_2;
    puVar2[2] = param_3;
    puVar2[3] = param_4;
    puVar2[8] = param_5;
  }
  return;
}

