// Class: EA::Text::TextStyleHash


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::TextStyleHash::TEMPNAMEPLACEHOLDERVALUE(EA::Text::TextStyle const&) const */

void __thiscall EA::Text::TextStyleHash::operator()(TextStyleHash *this,TextStyle *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  TextStyle TVar12;
  short sVar13;
  undefined1 *puVar14;
  undefined4 uVar15;
  TextStyle *pTVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_188 [384];
  long local_8;
  
  sVar13 = *(short *)param_1;
  local_8 = ___stack_chk_guard;
  puVar14 = auStack_188;
  pTVar16 = param_1;
  while (sVar13 != 0) {
    *puVar14 = (char)sVar13;
    pTVar16 = pTVar16 + 2;
    puVar14 = puVar14 + 1;
    sVar13 = *(short *)pTVar16;
  }
  pTVar16 = param_1 + 0x224;
  sVar13 = *(short *)(param_1 + 0x224);
  while (sVar13 != 0) {
    *puVar14 = (char)sVar13;
    pTVar16 = pTVar16 + 2;
    puVar14 = puVar14 + 1;
    sVar13 = *(short *)pTVar16;
  }
  uVar15 = *(undefined4 *)(param_1 + 0x210);
  fVar17 = *(float *)(param_1 + 0x208);
  uVar1 = *(undefined4 *)(param_1 + 0x214);
  uVar2 = *(undefined4 *)(param_1 + 0x264);
  uVar3 = *(undefined4 *)(param_1 + 0x268);
  uVar4 = *(undefined4 *)(param_1 + 0x26c);
  uVar5 = *(undefined4 *)(param_1 + 0x27c);
  uVar6 = *(undefined4 *)(param_1 + 0x280);
  uVar7 = *(undefined4 *)(param_1 + 0x284);
  uVar8 = *(undefined4 *)(param_1 + 0x288);
  uVar9 = *(undefined4 *)(param_1 + 0x28c);
  uVar10 = *(undefined4 *)(param_1 + 0x290);
  uVar11 = *(undefined4 *)(param_1 + 0x294);
  *puVar14 = (char)(int)*(float *)(param_1 + 0x200);
  puVar14[2] = (char)(int)fVar17;
  TVar12 = param_1[0x20c];
  *(TextStyle *)(puVar14 + 1) = param_1[0x204];
  *(TextStyle *)(puVar14 + 3) = TVar12;
  puVar14[0x16] = (char)uVar9;
  puVar14[0x17] = (char)uVar10;
  puVar14[0x18] = (char)uVar11;
  uVar9 = *(undefined4 *)(param_1 + 0x298);
  puVar14[4] = (char)uVar15;
  puVar14[5] = (char)uVar1;
  *(undefined4 *)(puVar14 + 6) = uVar2;
  *(undefined4 *)(puVar14 + 10) = uVar3;
  *(undefined4 *)(puVar14 + 0xe) = uVar4;
  puVar14[0x12] = (char)uVar5;
  puVar14[0x13] = (char)uVar6;
  puVar14[0x14] = (char)uVar7;
  puVar14[0x15] = (char)uVar8;
  puVar14[0x19] = (char)uVar9;
  fVar20 = *(float *)(param_1 + 0x2ac);
  fVar19 = *(float *)(param_1 + 0x2b0);
  uVar15 = *(undefined4 *)(param_1 + 0x2a0);
  fVar18 = *(float *)(param_1 + 0x2b4);
  uVar1 = *(undefined4 *)(param_1 + 0x2a4);
  fVar17 = *(float *)(param_1 + 0x2b8);
  uVar2 = *(undefined4 *)(param_1 + 0x2a8);
  puVar14[0x1a] = (char)*(undefined4 *)(param_1 + 0x29c);
  puVar14[0x1b] = (char)uVar15;
  puVar14[0x1c] = (char)uVar1;
  puVar14[0x1d] = (char)uVar2;
  puVar14[0x1e] = (char)(int)fVar20;
  puVar14[0x1f] = (char)(int)fVar19;
  puVar14[0x20] = (char)(int)fVar18;
  puVar14[0x21] = (char)(int)fVar17;
  uVar15 = StdC::FNV1(auStack_188,(ulong)(puVar14 + (0x22 - (long)auStack_188)),0x811c9dc5);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar15);
  }
  return;
}

