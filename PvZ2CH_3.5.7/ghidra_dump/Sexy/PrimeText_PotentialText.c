// Class: Sexy::PrimeText_PotentialText


/* Sexy::PrimeText_PotentialText::PrimeText_PotentialText() */

void __thiscall
Sexy::PrimeText_PotentialText::PrimeText_PotentialText(PrimeText_PotentialText *this)

{
  FUN_05476574(this + 8);
  Color::Color((Color *)(this + 0x28));
  PrimeTextExtraParameters::PrimeTextExtraParameters((PrimeTextExtraParameters *)(this + 0x3c));
  *(undefined8 *)this = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  return;
}


/* Sexy::PrimeText_PotentialText::SetOptionalParameters(Sexy::PrimeTextExtraParameters*) */

void __thiscall
Sexy::PrimeText_PotentialText::SetOptionalParameters
          (PrimeText_PotentialText *this,PrimeTextExtraParameters *param_1)

{
  if (param_1 != (PrimeTextExtraParameters *)0x0) {
    *(undefined8 *)(this + 0x3c) = *(undefined8 *)param_1;
  }
  this[0x38] = (PrimeText_PotentialText)(param_1 != (PrimeTextExtraParameters *)0x0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PrimeText_PotentialText::Prepare() */

void __thiscall Sexy::PrimeText_PotentialText::Prepare(PrimeText_PotentialText *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  PrimeGlyphMesh *pPVar5;
  undefined8 uVar6;
  undefined1 auStack_10 [8];
  long local_8;
  
  iVar1 = *(int *)(this + 0x44);
  local_8 = ___stack_chk_guard;
  if (iVar1 == 2) {
    iVar1 = *(int *)(this + 0x10);
    iVar2 = *(int *)(this + 0x14);
    iVar3 = *(int *)(this + 0x18);
    uVar6 = *(undefined8 *)this;
    FUN_05477b24(auStack_10,this + 8);
    pPVar5 = (PrimeGlyphMesh *)
             PrimeTypeface::PrepareString_Line
                       ((PrimeTypeface *)(float)iVar1,(float)iVar2,(float)iVar3,uVar6,auStack_10,
                        *(undefined4 *)(this + 0x20),this + 0x28);
    FUN_05476c50(auStack_10);
  }
  else if (iVar1 == 3) {
    iVar1 = *(int *)(this + 0x10);
    iVar2 = *(int *)(this + 0x14);
    iVar3 = *(int *)(this + 0x18);
    iVar4 = *(int *)(this + 0x1c);
    uVar6 = *(undefined8 *)this;
    FUN_05477b24(auStack_10,this + 8);
    pPVar5 = (PrimeGlyphMesh *)
             PrimeTypeface::PrepareString_Paragraph
                       ((PrimeTypeface *)(float)iVar1,(float)iVar2,(float)iVar3,(float)iVar4,uVar6,
                        auStack_10,*(undefined4 *)(this + 0x20),*(undefined4 *)(this + 0x24),
                        this + 0x28);
    FUN_05476c50(auStack_10);
  }
  else {
    pPVar5 = (PrimeGlyphMesh *)0x0;
    if (iVar1 == 1) {
      iVar1 = *(int *)(this + 0x10);
      iVar2 = *(int *)(this + 0x14);
      uVar6 = *(undefined8 *)this;
      FUN_05477b24(auStack_10,this + 8);
      pPVar5 = (PrimeGlyphMesh *)
               PrimeTypeface::PrepareString_Simple
                         ((PrimeTypeface *)(float)iVar1,(float)iVar2,uVar6,auStack_10,this + 0x28);
      FUN_05476c50(auStack_10);
    }
  }
  if (this[0x38] != (PrimeText_PotentialText)0x0) {
    PrimeTypeface::ApplyOptionalParameters
              (*(PrimeTypeface **)this,pPVar5,(PrimeTextExtraParameters *)(this + 0x3c),
               (float)*(int *)(this + 0x10),(float)*(int *)(this + 0x14),
               (float)*(int *)(this + 0x18),(float)*(int *)(this + 0x1c));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pPVar5);
}

