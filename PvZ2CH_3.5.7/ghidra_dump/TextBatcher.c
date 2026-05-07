// Class: TextBatcher


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TextBatcher::DrawItem(Sexy::Graphics*, TextEntry*) */

void __thiscall TextBatcher::DrawItem(TextBatcher *this,Graphics *param_1,TextEntry *param_2)

{
  BaseBufferResource *this_00;
  long lVar1;
  float fVar2;
  float fVar3;
  Color aCStack_18 [16];
  long local_8;
  
  lVar1 = *(long *)(param_2 + 0x18);
  local_8 = ___stack_chk_guard;
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_2 + 0x10);
  }
  else {
    fVar2 = *(float *)(param_2 + 4);
    fVar3 = *(float *)param_2;
    Sexy::Color::Color(aCStack_18,0);
    TodDrawString(param_1,param_2 + 8,(int)fVar3,(int)fVar2,lVar1,aCStack_18,
                  *(undefined4 *)(param_2 + 0x30));
    lVar1 = *(long *)(param_2 + 0x10);
  }
  if (lVar1 == 0) {
    this_00 = (BaseBufferResource *)Sexy::PrimeText::Instance();
    lVar1 = Sexy::BaseBufferResource::GetPtr(this_00);
    *(long *)(param_2 + 0x10) = lVar1;
  }
  fVar3 = *(float *)param_2;
  fVar2 = *(float *)(param_2 + 4);
  Sexy::Insets::Insets((Insets *)aCStack_18,(Insets *)(param_2 + 0x20));
  TodDrawString(param_1,param_2 + 8,(int)fVar3,(int)fVar2,lVar1,(Insets *)aCStack_18,
                *(undefined4 *)(param_2 + 0x30));
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* TextBatcher::Add(float, float, std::wstring const&, Sexy::PrimeTypeface*, Sexy::PrimeTypeface*,
   DrawStringJustification, Sexy::Color, float) */

void __thiscall
TextBatcher::Add(undefined4 param_1,undefined4 param_2,undefined4 param_3_00,TextBatcher *this,
                undefined8 param_3,undefined8 param_4,undefined8 param_5,undefined4 param_8,
                undefined8 *param_9)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)Batcher<TextEntry>::add((Batcher<TextEntry> *)this);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = param_1;
    puVar2[1] = param_2;
    thunk_FUN_05477b9c(puVar2 + 2,param_3);
    uVar1 = param_9[1];
    *(undefined8 *)(puVar2 + 8) = *param_9;
    *(undefined8 *)(puVar2 + 10) = uVar1;
    *(undefined8 *)(puVar2 + 4) = param_4;
    *(undefined8 *)(puVar2 + 6) = param_5;
    puVar2[0xc] = param_8;
    puVar2[0xd] = param_3_00;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TextBatcher::Add(float, float, std::string const&, Sexy::PrimeTypeface*, Sexy::PrimeTypeface*,
   DrawStringJustification, Sexy::Color, float) */

void __thiscall
TextBatcher::Add(TextBatcher *param_1,undefined8 param_2,undefined8 param_3_00,TextBatcher *this,
                Sexy *param_3,undefined8 param_4,undefined8 param_5,undefined8 param_8,
                Insets *param_9)

{
  undefined1 auStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::UTF8StringToWString(param_3,(string *)param_3);
  Sexy::Insets::Insets(aIStack_18,param_9);
  Add(param_1,param_2,param_3_00,this,auStack_20,param_4,param_5,param_8,aIStack_18);
  FUN_05476c50(auStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

