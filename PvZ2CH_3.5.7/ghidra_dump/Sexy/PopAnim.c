// Class: Sexy::PopAnim


/* Sexy::PopAnim::StaticClassInit() */

void Sexy::PopAnim::StaticClassInit(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = StaticGetClass();
  uVar2 = ResourceInfoTypes::PopAnimRes::StaticGetClass();
  FUN_05172a74(lVar1 + 0x48,uVar2);
  return;
}


/* Sexy::PopAnim::StaticGetClass() */

long * Sexy::PopAnim::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)ResourceClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = BaseResource::StaticGetClass();
  (*pcVar3)(plVar1,"PopAnim",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Sexy::PopAnim::GetClass() const */

long * Sexy::PopAnim::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)ResourceClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = BaseResource::StaticGetClass();
  (*pcVar3)(plVar1,"PopAnim",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Sexy::PopAnim::TEMPNAMEPLACEHOLDERVALUE(Sexy::PopAnim const&) */

PopAnim * __thiscall Sexy::PopAnim::operator=(PopAnim *this,PopAnim *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  PopAnim PVar6;
  PopAnim PVar7;
  PopAnim PVar8;
  PopAnim PVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  BaseResource::operator=((BaseResource *)this,(BaseResource *)param_1);
  uVar3 = *(undefined4 *)(param_1 + 0x28);
  uVar4 = *(undefined4 *)(param_1 + 0x2c);
  uVar11 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined4 *)(param_1 + 0x30);
  uVar10 = *(undefined8 *)(param_1 + 0x34);
  uVar1 = *(undefined8 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x20) = uVar11;
  *(undefined4 *)(this + 0x30) = uVar5;
  *(undefined4 *)(this + 0x28) = uVar3;
  *(undefined4 *)(this + 0x2c) = uVar4;
  *(undefined8 *)(this + 0x34) = uVar10;
  *(undefined8 *)(this + 0x3c) = uVar1;
  thunk_FUN_05475e00(this + 0x48,param_1 + 0x48);
  uVar3 = *(undefined4 *)(param_1 + 0x60);
  uVar10 = *(undefined8 *)(param_1 + 0x58);
  uVar4 = *(undefined4 *)(param_1 + 100);
  *(undefined8 *)(this + 0x50) = *(undefined8 *)(param_1 + 0x50);
  uVar5 = *(undefined4 *)(param_1 + 0x68);
  *(undefined8 *)(this + 0x58) = uVar10;
  PVar6 = param_1[0xa0];
  uVar10 = *(undefined8 *)(param_1 + 0x6c);
  uVar11 = *(undefined8 *)(param_1 + 0x74);
  PVar7 = param_1[0xa1];
  *(undefined4 *)(this + 0x60) = uVar3;
  PVar8 = param_1[0xa2];
  *(undefined4 *)(this + 100) = uVar4;
  PVar9 = param_1[0xa3];
  *(undefined4 *)(this + 0x68) = uVar5;
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(this + 0x6c) = uVar10;
  *(undefined8 *)(this + 0x74) = uVar11;
  uVar10 = *(undefined8 *)(param_1 + 0x84);
  *(undefined8 *)(this + 0x7c) = *(undefined8 *)(param_1 + 0x7c);
  *(undefined8 *)(this + 0x84) = uVar10;
  *(undefined4 *)(this + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
  this[0xa0] = PVar6;
  *(undefined8 *)(this + 0x90) = uVar1;
  *(undefined8 *)(this + 0x98) = uVar2;
  this[0xa1] = PVar7;
  this[0xa2] = PVar8;
  this[0xa3] = PVar9;
  return this;
}


/* Sexy::PopAnim::Fail(std::string const&) */

undefined8 Sexy::PopAnim::Fail(string *param_1)

{
  thunk_FUN_05475e00(*(long *)(param_1 + 0x58) + 0x50);
  return 0;
}


/* Sexy::PopAnim::ResetAnimHelper(Sexy::PASpriteInst*) */

void __thiscall Sexy::PopAnim::ResetAnimHelper(PopAnim *this,PASpriteInst *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  lVar3 = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  param_1[0xb] = (PASpriteInst)0x1;
  *(undefined4 *)(param_1 + 0xc) = 0;
  iVar1 = FUN_05172a9c(uVar4,*(undefined8 *)(param_1 + 0x50));
  while (lVar2 = lVar3, (int)lVar3 < iVar1) {
    while( true ) {
      lVar3 = lVar2 + 1;
      lVar2 = FUN_05172aa8(uVar4,lVar2);
      if (*(PASpriteInst **)(lVar2 + 8) == (PASpriteInst *)0x0) break;
      ResetAnimHelper(this,*(PASpriteInst **)(lVar2 + 8));
      uVar4 = *(undefined8 *)(param_1 + 0x48);
      iVar1 = FUN_05172a9c(uVar4,*(undefined8 *)(param_1 + 0x50));
      lVar2 = lVar3;
      if (iVar1 <= (int)lVar3) goto LAB_05173b1c;
    }
  }
LAB_05173b1c:
  this[0xa1] = (PopAnim)0x1;
  return;
}


/* Sexy::PopAnim::ResetAnim() */

void __thiscall Sexy::PopAnim::ResetAnim(PopAnim *this)

{
  ResetAnimHelper(this,*(PASpriteInst **)(this + 0x50));
  this[0xa2] = (PopAnim)0x0;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  return;
}


/* Sexy::PopAnim::IsActive() const */

PopAnim __thiscall Sexy::PopAnim::IsActive(PopAnim *this)

{
  return this[0xa2];
}


/* Sexy::PopAnim::SetPAMColor(Sexy::Color const&) */

void __thiscall Sexy::PopAnim::SetPAMColor(PopAnim *this,Color *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x90) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x98) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PopAnim::CalcObjectPos(Sexy::PASpriteInst const*, Sexy::PAObjectPos const*,
   Sexy::PATransform*, Sexy::Color*) */

void __thiscall
Sexy::PopAnim::CalcObjectPos
          (PopAnim *this,PASpriteInst *param_1,PAObjectPos *param_2,PATransform *param_3,
          Color *param_4)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  uVar1 = *(undefined8 *)(param_2 + 0x14);
  local_8 = ___stack_chk_guard;
  *(undefined8 *)param_3 = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_3 + 8) = uVar1;
  *(undefined8 *)(param_3 + 0x10) = *(undefined8 *)(param_2 + 0x1c);
  Insets::Insets((Insets *)&local_18,(uint)(byte)param_2[8],(uint)(byte)param_2[9],
                 (uint)(byte)param_2[10],(uint)(byte)param_2[0xb]);
  fVar11 = *(float *)(this + 0x60);
  *(undefined8 *)param_4 = local_18;
  *(undefined8 *)(param_4 + 8) = uStack_10;
  if (((fVar11 != 0.0) && (*(PASpriteInst **)(this + 0x50) == param_1)) &&
     (lVar10 = FUN_05172b54(*(undefined8 *)(*(PASpriteInst **)(this + 0x50) + 0x48),
                            (long)*(int *)param_2), *(char *)(lVar10 + 0x38) != '\0')) {
    fVar11 = *(float *)(this + 100) / fVar11;
    fVar12 = 1.0 - fVar11;
    PATransform::InterpolateTo((PATransform *)(lVar10 + 0x20),fVar11);
    iVar2 = *(int *)param_4;
    iVar3 = *(int *)(param_4 + 4);
    iVar4 = *(int *)(param_4 + 8);
    iVar5 = *(int *)(param_4 + 0xc);
    iVar6 = *(int *)(lVar10 + 0x14);
    iVar7 = *(int *)(lVar10 + 0x18);
    iVar8 = *(int *)(lVar10 + 0x1c);
    iVar9 = *(int *)(lVar10 + 0x10);
    *(undefined8 *)(param_3 + 0x10) = local_30;
    *(undefined8 *)param_3 = local_40;
    *(undefined8 *)(param_3 + 8) = uStack_38;
    Insets::Insets((Insets *)&local_18,(int)(fVar11 * (float)iVar2 + 0.5 + (float)iVar9 * fVar12),
                   (int)(fVar11 * (float)iVar3 + 0.5 + (float)iVar6 * fVar12),
                   (int)(fVar11 * (float)iVar4 + 0.5 + (float)iVar7 * fVar12),
                   (int)(fVar11 * (float)iVar5 + 0.5 + (float)iVar8 * fVar12));
    *(undefined8 *)param_4 = local_18;
    *(undefined8 *)(param_4 + 8) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::PopAnim::DrawDebugOverlay(Sexy::Graphics*) */

void __thiscall Sexy::PopAnim::DrawDebugOverlay(PopAnim *this,Graphics *param_1)

{
  nop();
  return;
}


/* Sexy::PopAnim::FindSpriteDef(char const*) */

undefined8 * __thiscall Sexy::PopAnim::FindSpriteDef(PopAnim *this,char *param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar5 = *(long *)(this + 0x58);
  if (lVar5 != 0) {
    uVar6 = *(undefined8 *)(lVar5 + 8);
    uVar2 = FUN_05172b5c(uVar6,*(undefined8 *)(lVar5 + 0x10));
    uVar4 = 0;
    while (uVar4 < uVar2) {
      puVar3 = (undefined8 *)FUN_05172ad4(uVar6,uVar4);
      iVar1 = strcasecmp((char *)*puVar3,param_1);
      uVar4 = (ulong)((int)uVar4 + 1);
      if (iVar1 == 0) {
        return puVar3;
      }
    }
  }
  return (undefined8 *)0x0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PopAnim::FrameHit(Sexy::PASpriteInst*, Sexy::PAFrame*, Sexy::PAObjectPos*) */

void Sexy::PopAnim::FrameHit(PASpriteInst *param_1,PAFrame *param_2,PAObjectPos *param_3)

{
  short sVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  Sexy *pSVar8;
  long *plVar9;
  char *pcVar10;
  long lVar11;
  undefined8 uVar12;
  string *extraout_x1;
  string *psVar13;
  string *extraout_x1_00;
  string *extraout_x1_01;
  string *extraout_x1_02;
  string *extraout_x1_03;
  undefined8 uVar14;
  long lVar15;
  undefined1 auVar16 [16];
  uint local_3c;
  string asStack_38 [8];
  double local_30;
  double local_28;
  string asStack_20 [8];
  Sexy aSStack_18 [8];
  undefined8 local_10;
  long local_8;
  
  uVar14 = *(undefined8 *)(param_3 + 0x20);
  uVar12 = *(undefined8 *)(param_3 + 0x28);
  local_8 = ___stack_chk_guard;
  lVar15 = 0;
  param_2[0xb] = (PAFrame)0x0;
  iVar5 = FUN_05172b48(uVar14,uVar12);
  if (0 < iVar5) {
    do {
      auVar16 = FUN_05172b24(uVar14,lVar15);
      psVar13 = auVar16._8_8_;
      pSVar8 = auVar16._0_8_;
      if (pSVar8 != (Sexy *)0x0) {
        plVar9 = *(long **)(param_1 + 0x20);
        if ((plVar9 == (long *)0x0) ||
           (cVar2 = (**(code **)(*plVar9 + 0x28))
                              (plVar9,*(undefined4 *)(param_1 + 0x18),param_2,pSVar8,pSVar8 + 8),
           psVar13 = extraout_x1, cVar2 == '\0')) {
          Lower(pSVar8,psVar13);
          bVar3 = std::operator==((string *)&local_10,"delay");
          std::string::~string((string *)&local_10);
          if (bVar3 != 0) {
            pSVar8 = pSVar8 + 8;
            iVar5 = FUN_054743b0(pSVar8,0x2c,0);
            if (iVar5 == -1) {
              Trim(pSVar8,extraout_x1_01);
              pcVar10 = (char *)FUN_0547429c((string *)&local_10);
              iVar5 = atoi(pcVar10);
              std::string::~string((string *)&local_10);
              uVar14 = *(undefined8 *)(param_3 + 0x20);
              uVar12 = *(undefined8 *)(param_3 + 0x28);
              *(short *)(param_2 + 8) = (short)iVar5;
              iVar5 = FUN_05172b48(uVar14,uVar12);
            }
            else {
              FUN_05475ffc(aSStack_18,pSVar8,0,(long)iVar5);
              Trim(aSStack_18,extraout_x1_02);
              pcVar10 = (char *)FUN_0547429c((string *)&local_10);
              iVar6 = atoi(pcVar10);
              std::string::~string((string *)&local_10);
              std::string::~string((string *)aSStack_18);
              FUN_05475ffc(aSStack_18,pSVar8,(long)(iVar5 + 1),0xffffffffffffffff);
              Trim(aSStack_18,extraout_x1_03);
              pcVar10 = (char *)FUN_0547429c((string *)&local_10);
              iVar5 = atoi(pcVar10);
              std::string::~string((string *)&local_10);
              std::string::~string((string *)aSStack_18);
              if (iVar5 <= iVar6) {
                iVar5 = iVar6 + 1;
              }
              iVar5 = iVar5 - iVar6;
              iVar7 = Rand();
              uVar14 = *(undefined8 *)(param_3 + 0x20);
              sVar1 = 0;
              if (iVar5 != 0) {
                sVar1 = (short)(iVar7 / iVar5);
              }
              uVar12 = *(undefined8 *)(param_3 + 0x28);
              *(short *)(param_2 + 8) = ((short)iVar7 - sVar1 * (short)iVar5) + (short)iVar6;
              iVar5 = FUN_05172b48(uVar14,uVar12);
            }
            goto LAB_05174234;
          }
          Lower(pSVar8,extraout_x1_00);
          bVar4 = std::operator==((string *)&local_10,"playsample");
          std::string::~string((string *)&local_10);
          if (bVar4) {
            bVar4 = true;
            FUN_05475d88(asStack_38,pSVar8 + 8);
            local_30 = 1.0;
            local_28 = 0.0;
            local_3c = (uint)bVar3;
            Set8BytesTo0(asStack_20);
            lVar11 = FUN_05474184(asStack_38);
            while (lVar11 != 0) {
              Set8BytesTo0((string *)aSStack_18);
              iVar5 = FUN_054743b0(asStack_38,0x2c,0);
              if (iVar5 == -1) {
                thunk_FUN_05475e00((string *)aSStack_18,asStack_38);
              }
              else {
                FUN_05475ffc((string *)&local_10,asStack_38,0,(long)iVar5);
                FUN_05474278((string *)aSStack_18,(string *)&local_10);
                std::string::~string((string *)&local_10);
              }
              if (bVar4) {
                thunk_FUN_05475e00(asStack_20,(string *)aSStack_18);
              }
              else {
                while (iVar6 = FUN_054743b0((string *)aSStack_18,0x20,0), iVar6 != -1) {
                  local_10 = FUN_05474e7c((string *)aSStack_18);
                  uVar12 = __gnu_cxx::
                           __normal_iterator<char*,std::vector<char,std::allocator<char>>>::
                           operator+((__normal_iterator<char*,std::vector<char,std::allocator<char>>>
                                      *)&local_10,(long)iVar6);
                  FUN_05475070((string *)aSStack_18,uVar12);
                }
                pcVar10 = (char *)FUN_0547429c();
                iVar6 = strncasecmp(pcVar10,"volume=",7);
                if (iVar6 == 0) {
                  FUN_05475ffc((string *)&local_10,(string *)aSStack_18,7,0xffffffffffffffff);
                  StringToDouble((string *)&local_10,&local_30);
                  std::string::~string((string *)&local_10);
                }
                else {
                  iVar6 = strncasecmp(pcVar10,"pan=",4);
                  if (iVar6 == 0) {
                    FUN_05475ffc((string *)&local_10,(string *)aSStack_18,4,0xffffffffffffffff);
                    StringToInt((string *)&local_10,(int *)&local_3c);
                    std::string::~string((string *)&local_10);
                  }
                  else {
                    iVar6 = strncasecmp(pcVar10,"steps=",6);
                    if (iVar6 == 0) {
                      FUN_05475ffc((string *)&local_10,(string *)aSStack_18,6,0xffffffffffffffff);
                      StringToDouble((string *)&local_10,&local_28);
                      std::string::~string((string *)&local_10);
                    }
                  }
                }
              }
              if (iVar5 == -1) {
                std::string::~string((string *)aSStack_18);
                break;
              }
              bVar4 = false;
              FUN_05475ffc((string *)&local_10,asStack_38,(long)(iVar5 + 1),0xffffffffffffffff);
              FUN_05474278(asStack_38,(string *)&local_10);
              std::string::~string((string *)&local_10);
              std::string::~string((string *)aSStack_18);
              lVar11 = FUN_05474184(asStack_38);
            }
            plVar9 = *(long **)(param_1 + 0x20);
            if ((plVar9 != (long *)0x0) &&
               (*(code **)(*plVar9 + 0x10) != PopAnimListener::PopAnimPlaySample)) {
              (**(code **)(*plVar9 + 0x10))(local_30,local_28,plVar9,asStack_20,local_3c);
            }
            std::string::~string(asStack_20);
            std::string::~string(asStack_38);
          }
        }
        uVar14 = *(undefined8 *)(param_3 + 0x20);
        iVar5 = FUN_05172b48(uVar14,*(undefined8 *)(param_3 + 0x28));
      }
LAB_05174234:
      lVar15 = lVar15 + 1;
    } while ((int)lVar15 < iVar5);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* Sexy::PopAnim::DoFramesHit(Sexy::PASpriteInst*, Sexy::PAObjectPos*) */

void Sexy::PopAnim::DoFramesHit(PASpriteInst *param_1,PAObjectPos *param_2)

{
  int iVar1;
  PAObjectPos *pPVar2;
  int *piVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar5 = 0;
  pPVar2 = (PAObjectPos *)
           FUN_05172ab0(*(undefined8 *)(*(long *)(param_2 + 0x18) + 0x10),
                        (long)(int)*(float *)(param_2 + 0xc));
  FrameHit(param_1,(PAFrame *)param_2,pPVar2);
  uVar6 = *(undefined8 *)pPVar2;
  iVar1 = FUN_05172b10(uVar6,*(undefined8 *)(pPVar2 + 8));
  do {
    lVar4 = lVar5;
    if (iVar1 <= (int)lVar5) {
      return;
    }
    while( true ) {
      lVar5 = lVar4 + 1;
      piVar3 = (int *)FUN_05172b1c(uVar6,lVar4);
      piVar3 = (int *)FUN_05172b04(*(undefined8 *)(*(long *)(param_2 + 0x18) + 0x78),(long)*piVar3);
      if (*(char *)((long)piVar3 + 6) == '\0') break;
      lVar4 = FUN_05172aa8(*(undefined8 *)(param_2 + 0x48),(long)*piVar3);
      if (*(PAObjectPos **)(lVar4 + 8) == (PAObjectPos *)0x0) break;
      DoFramesHit(param_1,*(PAObjectPos **)(lVar4 + 8));
      uVar6 = *(undefined8 *)pPVar2;
      iVar1 = FUN_05172b10(uVar6,*(undefined8 *)(pPVar2 + 8));
      lVar4 = lVar5;
      if (iVar1 <= (int)lVar5) {
        return;
      }
    }
  } while( true );
}


/* Sexy::PopAnim::PrepSpriteInstFrame(Sexy::PASpriteInst*, Sexy::PAObjectPos*) */

void Sexy::PopAnim::PrepSpriteInstFrame(PASpriteInst *param_1,PAObjectPos *param_2)

{
  int iVar1;
  PAObjectPos *pPVar2;
  int *piVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  PAObjectPos *pPVar8;
  long lVar9;
  undefined8 uVar10;
  
  pPVar2 = (PAObjectPos *)
           FUN_05172ab0(*(undefined8 *)(*(long *)(param_2 + 0x18) + 0x10),
                        (long)(int)*(float *)(param_2 + 0xc));
  if (param_2[0xb] != (PAObjectPos)0x0) {
    FrameHit(param_1,(PAFrame *)param_2,pPVar2);
  }
  if (pPVar2[0x18] == (PAObjectPos)0x0) {
    uVar10 = *(undefined8 *)pPVar2;
    lVar7 = 0;
    iVar1 = FUN_05172b10(uVar10,*(undefined8 *)(pPVar2 + 8));
LAB_051747f8:
    lVar9 = lVar7;
    if ((int)lVar7 < iVar1) {
      while( true ) {
        lVar7 = lVar9 + 1;
        piVar3 = (int *)FUN_05172b1c(uVar10,lVar9);
        lVar9 = *(long *)(param_2 + 0x18);
        piVar3 = (int *)FUN_05172b04(*(undefined8 *)(lVar9 + 0x78),(long)*piVar3);
        if (*(char *)((long)piVar3 + 6) == '\0') break;
        lVar4 = FUN_05172aa8(*(undefined8 *)(param_2 + 0x48),(long)*piVar3);
        pPVar8 = *(PAObjectPos **)(lVar4 + 8);
        if (pPVar8 == (PAObjectPos *)0x0) break;
        iVar1 = FUN_05172a7c(*(undefined8 *)(lVar9 + 0x10),*(undefined8 *)(lVar9 + 0x18));
        iVar1 = (int)*(float *)(param_2 + 0xc) + *(int *)(param_2 + 0x10) * iVar1;
        if ((iVar1 + -1 != *(int *)(pPVar8 + 0x14)) && (iVar1 != *(int *)(pPVar8 + 0x14))) {
          *(undefined4 *)(pPVar8 + 0x10) = 0;
          *(undefined2 *)(pPVar8 + 8) = 0;
          pPVar8[0xb] = (PAObjectPos)0x1;
          *(undefined4 *)(pPVar8 + 0xc) = 0;
        }
        PrepSpriteInstFrame(param_1,pPVar8);
        uVar10 = *(undefined8 *)pPVar2;
        uVar6 = *(undefined8 *)(pPVar2 + 8);
        *(int *)(pPVar8 + 0x14) = iVar1;
        iVar1 = FUN_05172b10(uVar10,uVar6);
        lVar9 = lVar7;
        if (iVar1 <= (int)lVar7) {
          return;
        }
      }
      goto LAB_051747f8;
    }
  }
  else if ((*(PAObjectPos **)(param_1 + 0x50) == param_2) && (param_1[0xa2] != (PASpriteInst)0x0)) {
    plVar5 = *(long **)(param_1 + 0x20);
    param_1[0xa2] = (PASpriteInst)0x0;
    if (plVar5 != (long *)0x0) {
      if (*(code **)(*plVar5 + 0x18) != PopAnimListener::PopAnimStopped) {
        (**(code **)(*plVar5 + 0x18))(plVar5,*(undefined4 *)(param_1 + 0x18));
      }
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PopAnim::UpdateTransforms(Sexy::PASpriteInst*, Sexy::PATransform*, Sexy::Color const&) */

void __thiscall
Sexy::PopAnim::UpdateTransforms
          (PopAnim *this,PASpriteInst *param_1,PATransform *param_2,Color *param_3)

{
  char cVar1;
  int iVar2;
  vector<int,std::allocator<int>> *this_00;
  int *piVar3;
  PAObjectPos *pPVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  Color aCStack_30 [16];
  PATransform local_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 == (PATransform *)0x0) {
    PopTransformMatrix::operator=
              ((PopTransformMatrix *)(param_1 + 0x30),(SexyMatrix3 *)(this + 0x6c));
  }
  else {
    uVar7 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 0x38) = uVar7;
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x10);
  }
  uVar7 = *(undefined8 *)(param_3 + 8);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)param_3;
  *(undefined8 *)(param_1 + 0x28) = uVar7;
  if (((-1 < (int)*(float *)(param_1 + 0xc)) &&
      (this_00 = (vector<int,std::allocator<int>> *)
                 FUN_05172ab0(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10),
                              (long)(int)*(float *)(param_1 + 0xc)),
      this_00 != (vector<int,std::allocator<int>> *)0x0)) &&
     (cVar1 = std::vector<int,std::allocator<int>>::empty(this_00), cVar1 == '\0')) {
    PATransform::PATransform(local_20);
    Color::Color(aCStack_30);
    uVar7 = *(undefined8 *)this_00;
    iVar2 = FUN_05172b10(uVar7,*(undefined8 *)(this_00 + 8));
    lVar6 = 0;
    if (param_2 == (PATransform *)0x0) {
      while ((int)lVar6 < iVar2) {
        piVar3 = (int *)FUN_05172b1c(uVar7,lVar6);
        pPVar4 = (PAObjectPos *)
                 FUN_05172b04(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x78),(long)*piVar3);
        if (pPVar4[6] == (PAObjectPos)0x0) {
          lVar6 = lVar6 + 1;
        }
        else {
          lVar6 = lVar6 + 1;
          CalcObjectPos(this,param_1,pPVar4,local_20,aCStack_30);
          lVar5 = FUN_05172aa8(*(undefined8 *)(param_1 + 0x48),(long)*(int *)pPVar4);
          UpdateTransforms(this,*(PASpriteInst **)(lVar5 + 8),local_20,aCStack_30);
          uVar7 = *(undefined8 *)this_00;
          iVar2 = FUN_05172b10(uVar7,*(undefined8 *)(this_00 + 8));
        }
      }
    }
    else {
      lVar6 = 0;
      while ((int)lVar6 < iVar2) {
        piVar3 = (int *)FUN_05172b1c(uVar7,lVar6);
        pPVar4 = (PAObjectPos *)
                 FUN_05172b04(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x78),(long)*piVar3);
        if (pPVar4[6] == (PAObjectPos)0x0) {
          lVar6 = lVar6 + 1;
        }
        else {
          lVar6 = lVar6 + 1;
          CalcObjectPos(this,param_1,pPVar4,local_20,aCStack_30);
          PATransform::TransformSrc(param_2);
          lVar5 = FUN_05172aa8(*(undefined8 *)(param_1 + 0x48),(long)*(int *)pPVar4);
          UpdateTransforms(this,*(PASpriteInst **)(lVar5 + 8),local_20,aCStack_30);
          uVar7 = *(undefined8 *)this_00;
          iVar2 = FUN_05172b10(uVar7,*(undefined8 *)(this_00 + 8));
        }
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::PopAnim::UpdateTransforms() */

void __thiscall Sexy::PopAnim::UpdateTransforms(PopAnim *this)

{
  UpdateTransforms(this,*(PASpriteInst **)(this + 0x50),(PATransform *)0x0,(Color *)(this + 0x90));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PopAnim::DrawSprite(Sexy::Graphics*, Sexy::PASpriteInst const*, Sexy::PATransform const*,
   Sexy::Color const&, bool) */

void __thiscall
Sexy::PopAnim::DrawSprite
          (PopAnim *this,Graphics *param_1,PASpriteInst *param_2,PATransform *param_3,Color *param_4
          ,bool param_5)

{
  bool bVar1;
  undefined8 *puVar2;
  int *piVar3;
  PAObjectPos *pPVar4;
  long lVar5;
  Image *pIVar6;
  PASpriteInst *pPVar7;
  undefined8 local_90;
  undefined8 local_88;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  TRect aTStack_70 [8];
  int local_68;
  int local_64;
  PATransform local_60 [24];
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  PopTransformMatrix aPStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_2[10] != (PASpriteInst)0x0) && (5 < *(int *)(param_4 + 0xc))) {
    puVar2 = (undefined8 *)
             FUN_05172ab0(*(undefined8 *)(*(long *)(param_2 + 0x18) + 0x10),
                          (long)(int)*(float *)(param_2 + 0xc));
    PATransform::PATransform(local_60);
    Color::Color((Color *)&local_80);
    PATransform::PATransform((PATransform *)&local_48);
    local_90 = FUN_05174a78(*puVar2);
    local_88 = FUN_05174ac8(puVar2[1]);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_90,(__normal_iterator *)&local_88), bVar1)
    {
      piVar3 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_90);
      pPVar4 = (PAObjectPos *)
               FUN_05172b04(*(undefined8 *)(*(long *)(param_2 + 0x18) + 0x78),(long)*piVar3);
      if (pPVar4[6] == (PAObjectPos)0x0) {
        if ((*(float *)(this + 0x60) == 0.0) || (*(PASpriteInst **)(this + 0x50) != param_2)) {
          AffineMatrixMultiply2d
                    ((PopTransformMatrix *)local_60,(PopTransformMatrix *)param_3,
                     (PopTransformMatrix *)(pPVar4 + 0xc));
          local_78 = (uint)(byte)pPVar4[10] * *(int *)(param_4 + 8);
          local_80 = (uint)(byte)pPVar4[8] * *(int *)param_4;
          local_7c = (uint)(byte)pPVar4[9] * *(int *)(param_4 + 4);
          local_74 = (uint)(byte)pPVar4[0xb] * *(int *)(param_4 + 0xc);
        }
        else {
          CalcObjectPos(this,param_2,pPVar4,local_60,(Color *)&local_80);
          PopTransformMatrix::operator*
                    ((PopTransformMatrix *)param_3,(PopTransformMatrix *)local_60);
          local_7c = local_7c * *(int *)(param_4 + 4);
          local_78 = local_78 * *(int *)(param_4 + 8);
          local_74 = local_74 * *(int *)(param_4 + 0xc);
          local_80 = local_80 * *(int *)param_4;
        }
        local_74 = local_74 / 0xff;
        local_78 = local_78 / 0xff;
        local_7c = local_7c / 0xff;
        local_80 = local_80 / 0xff;
        puVar2 = (undefined8 *)
                 FUN_05172b2c(*(undefined8 *)(*(long *)(this + 0x58) + 0x38),
                              (long)*(short *)(pPVar4 + 4));
        AffineMatrixMultiply2d
                  ((PopTransformMatrix *)&local_48,(PopTransformMatrix *)local_60,
                   (PopTransformMatrix *)((long)puVar2 + 0x24));
        Graphics::SetColorizeImages(param_1,true);
        Graphics::SetColor(param_1,(Color *)&local_80);
        if ((param_5) || (pPVar4[7] != (PAObjectPos)0x0)) {
          Graphics::SetDrawMode(param_1,1);
        }
        else {
          Graphics::SetDrawMode(param_1,*(int *)(puVar2 + 4));
        }
        pIVar6 = (Image *)*puVar2;
        Image::GetCelRect((int)pIVar6);
        local_40 = (float)local_64 * 0.5 * local_44 + local_48 * (float)local_68 * 0.5 + local_40;
        local_34 = (float)local_64 * 0.5 * local_38 + local_3c * (float)local_68 * 0.5 + local_34;
        PopTransformMatrix::GetMatrix3();
        Graphics::DrawImageMatrix(param_1,pIVar6,(SexyMatrix3 *)aPStack_30,aTStack_70,0.0,0.0);
      }
      else {
        lVar5 = FUN_05172b54(*(undefined8 *)(param_2 + 0x48),(long)*(int *)pPVar4);
        pPVar7 = *(PASpriteInst **)(lVar5 + 8);
        PopTransformMatrix::PopTransformMatrix(aPStack_30,(SexyMatrix3 *)(this + 0x6c));
        AffineMatrixMultiply2d
                  ((PopTransformMatrix *)local_60,aPStack_30,(PopTransformMatrix *)(pPVar7 + 0x30));
        local_7c = (*(int *)(pPVar7 + 0x24) * *(int *)(param_4 + 4)) / 0xff;
        local_74 = (*(int *)(pPVar7 + 0x2c) * *(int *)(param_4 + 0xc)) / 0xff;
        local_80 = (*(int *)(pPVar7 + 0x20) * *(int *)param_4) / 0xff;
        local_78 = (*(int *)(pPVar7 + 0x28) * *(int *)(param_4 + 8)) / 0xff;
        DrawSprite(this,param_1,pPVar7,local_60,(Color *)&local_80,(bool)(param_5 | (byte)pPVar4[7])
                  );
      }
      eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
                ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_90);
    }
    Graphics::SetColorizeImages(param_1,false);
    Graphics::SetDrawMode(param_1,0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PopAnim::DrawSpriteReplaceLayerWithImage(Sexy::Graphics*, Sexy::PASpriteInst const*,
   Sexy::PATransform const*, Sexy::Color const&, bool, std::string const&, Sexy::Image*) */

void __thiscall
Sexy::PopAnim::DrawSpriteReplaceLayerWithImage
          (PopAnim *this,Graphics *param_1,PASpriteInst *param_2,PATransform *param_3,Color *param_4
          ,bool param_5,string *param_6,Image *param_7)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  PAObjectPos *pPVar5;
  long lVar6;
  PASpriteInst *pPVar7;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 local_88;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  TRect aTStack_70 [8];
  int local_68;
  int local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  PopTransformMatrix aPStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar3 = (undefined8 *)
           FUN_05172ab0(*(undefined8 *)(*(long *)(param_2 + 0x18) + 0x10),
                        (long)(int)*(float *)(param_2 + 0xc));
  PATransform::PATransform((PATransform *)&local_60);
  Color::Color((Color *)&local_80);
  PATransform::PATransform((PATransform *)&local_48);
  local_90 = FUN_05174a78(*puVar3);
  local_88 = FUN_05174ac8(puVar3[1]);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_90,(__normal_iterator *)&local_88), bVar2) {
    piVar4 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_90);
    pPVar5 = (PAObjectPos *)
             FUN_05172b04(*(undefined8 *)(*(long *)(param_2 + 0x18) + 0x78),(long)*piVar4);
    if (pPVar5[6] == (PAObjectPos)0x0) {
      if ((*(float *)(this + 0x60) == 0.0) || (*(PASpriteInst **)(this + 0x50) != param_2)) {
        AffineMatrixMultiply2d
                  ((PopTransformMatrix *)&local_60,(PopTransformMatrix *)param_3,
                   (PopTransformMatrix *)(pPVar5 + 0xc));
        local_78 = (uint)(byte)pPVar5[10] * *(int *)(param_4 + 8);
        local_80 = (uint)(byte)pPVar5[8] * *(int *)param_4;
        local_7c = (uint)(byte)pPVar5[9] * *(int *)(param_4 + 4);
        local_74 = (uint)(byte)pPVar5[0xb] * *(int *)(param_4 + 0xc);
      }
      else {
        CalcObjectPos(this,param_2,pPVar5,(PATransform *)&local_60,(Color *)&local_80);
        PopTransformMatrix::operator*((PopTransformMatrix *)param_3,(PopTransformMatrix *)&local_60)
        ;
        local_7c = local_7c * *(int *)(param_4 + 4);
        local_78 = local_78 * *(int *)(param_4 + 8);
        local_74 = local_74 * *(int *)(param_4 + 0xc);
        local_80 = local_80 * *(int *)param_4;
        local_50 = local_a0;
        local_60 = local_b0;
        uStack_58 = uStack_a8;
      }
      local_74 = local_74 / 0xff;
      local_78 = local_78 / 0xff;
      local_7c = local_7c / 0xff;
      local_80 = local_80 / 0xff;
      lVar6 = FUN_05172b2c(*(undefined8 *)(*(long *)(this + 0x58) + 0x38),
                           (long)*(short *)(pPVar5 + 4));
      AffineMatrixMultiply2d
                ((PopTransformMatrix *)&local_48,(PopTransformMatrix *)&local_60,
                 (PopTransformMatrix *)(lVar6 + 0x24));
      local_38 = local_50;
      local_48 = local_60;
      local_40 = uStack_58;
      Graphics::SetColorizeImages(param_1,true);
      Graphics::SetColor(param_1,(Color *)&local_80);
      if ((param_5) || (pPVar5[7] != (PAObjectPos)0x0)) {
        Graphics::SetDrawMode(param_1,1);
      }
      else {
        Graphics::SetDrawMode(param_1,*(int *)(lVar6 + 0x20));
      }
      Image::GetCelRect((int)param_7);
      local_40 = CONCAT44(local_40._4_4_,
                          (float)local_64 * 0.5 * local_48._4_4_ +
                          (float)local_48 * (float)local_68 * 0.5 + (float)local_40);
      local_38 = CONCAT44((float)local_64 * 0.5 * (float)local_38 +
                          local_40._4_4_ * (float)local_68 * 0.5 + local_38._4_4_,(float)local_38);
      cVar1 = std::operator==((string *)(*(long *)(param_2 + 0x18) + 8),param_6);
      if (cVar1 != '\0') {
        PopTransformMatrix::GetMatrix3();
        Graphics::DrawImageMatrix(param_1,param_7,(SexyMatrix3 *)aPStack_30,aTStack_70,0.0,0.0);
      }
    }
    else {
      lVar6 = FUN_05172b54(*(undefined8 *)(param_2 + 0x48),(long)*(int *)pPVar5);
      pPVar7 = *(PASpriteInst **)(lVar6 + 8);
      PopTransformMatrix::PopTransformMatrix(aPStack_30,(SexyMatrix3 *)(this + 0x6c));
      AffineMatrixMultiply2d
                ((PopTransformMatrix *)&local_60,aPStack_30,(PopTransformMatrix *)(pPVar7 + 0x30));
      local_80 = (*(int *)(pPVar7 + 0x20) * *(int *)param_4) / 0xff;
      local_74 = (*(int *)(pPVar7 + 0x2c) * *(int *)(param_4 + 0xc)) / 0xff;
      local_7c = (*(int *)(pPVar7 + 0x24) * *(int *)(param_4 + 4)) / 0xff;
      local_78 = (*(int *)(pPVar7 + 0x28) * *(int *)(param_4 + 8)) / 0xff;
      DrawSpriteReplaceLayerWithImage
                (this,param_1,pPVar7,(PATransform *)&local_60,(Color *)&local_80,
                 (bool)(param_5 | (byte)pPVar5[7]),param_6,param_7);
    }
    eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
              ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_90);
  }
  Graphics::SetColorizeImages(param_1,false);
  Graphics::SetDrawMode(param_1,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::PopAnim::PopAnim(Sexy::PopAnim const&) */

void __thiscall Sexy::PopAnim::PopAnim(PopAnim *this,PopAnim *param_1)

{
  int iVar1;
  PASpriteInst *this_00;
  long lVar2;
  
  BaseResource::BaseResource((BaseResource *)this);
  *(undefined ***)this = &PTR_GetClass_06a2ef10;
  Insets::Insets((Insets *)(this + 0x34));
  Set8BytesTo0(this + 0x48);
  SexyTransform2D::SexyTransform2D((SexyTransform2D *)(this + 0x6c));
  Color::Color((Color *)(this + 0x90));
  operator=(this,param_1);
  this_00 = ::operator_new(0x60);
  PASpriteInst::PASpriteInst(this_00);
  *(PASpriteInst **)(this + 0x50) = this_00;
  lVar2 = *(long *)(this + 0x58);
  *(undefined8 *)(this_00 + 0x18) = 0;
  iVar1 = *(int *)(lVar2 + 0x60);
  *(undefined8 *)this_00 = 0;
  *(int *)(lVar2 + 0x60) = iVar1 + 1;
  return;
}


/* Sexy::PopAnim::Duplicate() const */

PopAnim * __thiscall Sexy::PopAnim::Duplicate(PopAnim *this)

{
  PopAnim *this_00;
  
  this_00 = ::operator_new(0xa8);
  PopAnim(this_00,this);
  return this_00;
}


/* Sexy::PopAnim::IncSpriteInstFrame(Sexy::PASpriteInst*, Sexy::PAObjectPos*, float) */

void Sexy::PopAnim::IncSpriteInstFrame(PASpriteInst *param_1,PAObjectPos *param_2,float param_3)

{
  int iVar1;
  undefined8 *puVar2;
  int *piVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  undefined8 uVar9;
  PAObjectPos *pPVar10;
  float fVar11;
  
  fVar11 = *(float *)(param_2 + 0xc);
  lVar7 = *(long *)(param_2 + 0x18);
  iVar8 = (int)fVar11;
  uVar9 = *(undefined8 *)(lVar7 + 0x10);
  puVar2 = (undefined8 *)FUN_05172ab0(uVar9,(long)iVar8);
  if (*(char *)(puVar2 + 3) != '\0') {
    return;
  }
  fVar11 = param_3 + fVar11;
  if ((int)fVar11 - iVar8 < 2) {
    *(float *)(param_2 + 0xc) = fVar11;
  }
  else {
    *(float *)(param_2 + 0xc) = (float)iVar8 + 1.9;
  }
  pPVar10 = *(PAObjectPos **)(param_1 + 0x50);
  if (pPVar10 == param_2) {
    lVar7 = std::vector<Sexy::PAFrame,std::allocator<Sexy::PAFrame>>::back
                      ((vector<Sexy::PAFrame,std::allocator<Sexy::PAFrame>> *)(lVar7 + 0x10));
    lVar4 = *(long *)(param_2 + 0x18);
    if (*(char *)(lVar7 + 0x18) == '\0') {
      iVar6 = *(int *)(lVar4 + 0x2c);
      if (iVar6 + *(int *)(lVar4 + 0x28) < (int)*(float *)(param_2 + 0xc)) {
        *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
        fVar11 = *(float *)(param_2 + 0xc) - (float)(iVar6 + 1);
        *(float *)(param_2 + 0xc) = fVar11;
        iVar6 = (int)fVar11;
        goto LAB_05175d28;
      }
    }
    else {
      iVar1 = *(int *)(lVar4 + 0x2c);
      iVar6 = iVar1 + *(int *)(lVar4 + 0x28);
      if (iVar6 <= (int)*(float *)(param_2 + 0xc)) {
        fVar11 = (float)iVar6;
        param_2[0xb] = (PAObjectPos)0x1;
        *(float *)(param_2 + 0xc) = fVar11;
        if (iVar1 != 0) {
          if (param_1[0xa2] == (PASpriteInst)0x0) {
            return;
          }
          plVar5 = *(long **)(param_1 + 0x20);
          param_1[0xa2] = (PASpriteInst)0x0;
          if (plVar5 == (long *)0x0) {
            return;
          }
          (**(code **)(*plVar5 + 0x18))(plVar5,*(undefined4 *)(param_1 + 0x18));
          return;
        }
        iVar6 = (int)fVar11;
        *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
        goto LAB_05175d28;
      }
    }
    iVar6 = (int)*(float *)(pPVar10 + 0xc);
  }
  else {
    fVar11 = *(float *)(param_2 + 0xc);
    iVar6 = (int)fVar11;
    iVar1 = FUN_05172a7c(uVar9,*(undefined8 *)(lVar7 + 0x18));
    if (iVar1 <= iVar6) {
      *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
      do {
        fVar11 = fVar11 - (float)iVar1;
        iVar6 = (int)fVar11;
      } while (iVar1 <= iVar6);
      *(float *)(param_2 + 0xc) = fVar11;
    }
  }
LAB_05175d28:
  param_2[0xb] = (PAObjectPos)(iVar8 != iVar6);
  if ((iVar8 != iVar6) && (0 < *(short *)(param_2 + 8))) {
    param_2[0xb] = (PAObjectPos)0x0;
    *(short *)(param_2 + 8) = *(short *)(param_2 + 8) + -1;
    *(float *)(param_2 + 0xc) = (float)iVar8;
  }
  else {
    uVar9 = *puVar2;
    iVar8 = FUN_05172b10(uVar9,puVar2[1]);
    lVar7 = 0;
    while (lVar4 = lVar7 + 1, (int)lVar7 < iVar8) {
      piVar3 = (int *)FUN_05172b1c(uVar9,lVar7);
      piVar3 = (int *)FUN_05172b04(*(undefined8 *)(*(long *)(param_2 + 0x18) + 0x78),(long)*piVar3);
      lVar7 = lVar4;
      if (*(char *)((long)piVar3 + 6) != '\0') {
        lVar4 = FUN_05172aa8(*(undefined8 *)(param_2 + 0x48),(long)*piVar3);
        IncSpriteInstFrame(param_1,*(PAObjectPos **)(lVar4 + 8),param_3);
        uVar9 = *puVar2;
        iVar8 = FUN_05172b10(uVar9,puVar2[1]);
      }
    }
  }
  return;
}


/* Sexy::PopAnim::AnimUpdate(float) */

void __thiscall Sexy::PopAnim::AnimUpdate(PopAnim *this,float param_1)

{
  IncSpriteInstFrame((PASpriteInst *)this,*(PAObjectPos **)(this + 0x50),param_1);
  PrepSpriteInstFrame((PASpriteInst *)this,*(PAObjectPos **)(this + 0x50));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PopAnim::Clear() */

void __thiscall Sexy::PopAnim::Clear(PopAnim *this)

{
  long lVar1;
  PASpriteInst *this_00;
  PopAnimDef *this_01;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Color::Color((Color *)&local_18,1);
  this[0xa2] = (PopAnim)0x0;
  lVar1 = *(long *)(this + 0x58);
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x90) = local_18;
  *(undefined8 *)(this + 0x98) = uStack_10;
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x60) == 0) {
      std::vector<Sexy::PASpriteDef,std::allocator<Sexy::PASpriteDef>>::clear
                ((vector<Sexy::PASpriteDef,std::allocator<Sexy::PASpriteDef>> *)(lVar1 + 8));
      this_01 = *(PopAnimDef **)(this + 0x58);
      if (this_01 != (PopAnimDef *)0x0) {
        PopAnimDef::~PopAnimDef(this_01);
        AK::FreeHook(this_01);
      }
    }
    else {
      *(int *)(lVar1 + 0x60) = *(int *)(lVar1 + 0x60) + -1;
    }
  }
  this_00 = *(PASpriteInst **)(this + 0x50);
  *(undefined8 *)(this + 0x58) = 0;
  this[0xa1] = (PopAnim)0x1;
  if (this_00 != (PASpriteInst *)0x0) {
    PASpriteInst::~PASpriteInst(this_00);
    AK::FreeHook(this_00);
  }
  *(undefined8 *)(this + 0x50) = 0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PopAnim::PopAnim(int, Sexy::PopAnimListener*) */

void __thiscall Sexy::PopAnim::PopAnim(PopAnim *this,int param_1,PopAnimListener *param_2)

{
  long lVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BaseResource::BaseResource((BaseResource *)this);
  *(undefined ***)this = &PTR_GetClass_06a2ef10;
  Insets::Insets((Insets *)(this + 0x34));
  Set8BytesTo0(this + 0x48);
  SexyTransform2D::SexyTransform2D((SexyTransform2D *)(this + 0x6c));
  Color::Color((Color *)(this + 0x90));
  this[0xa0] = (PopAnim)0x0;
  *(int *)(this + 0x18) = param_1;
  *(PopAnimListener **)(this + 0x20) = param_2;
  Color::Color((Color *)&local_18,1);
  *(undefined4 *)(this + 0x30) = 0;
  this[0xa2] = (PopAnim)0x0;
  *(undefined8 *)(this + 0x90) = local_18;
  *(undefined8 *)(this + 0x98) = uStack_10;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  Clear(this);
  this[0xa3] = (PopAnim)0x0;
  lVar1 = ___stack_chk_guard;
  this[0xa1] = (PopAnim)0x1;
  *(undefined4 *)(this + 0x2c) = 0x3f800000;
  *(undefined4 *)(this + 0x28) = 0x3f800000;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::PopAnim::StaticNew() */

PopAnim * Sexy::PopAnim::StaticNew(void)

{
  PopAnim *this;
  
  this = ::operator_new(0xa8);
  PopAnim(this,0,(PopAnimListener *)0x0);
  return this;
}


/* Sexy::PopAnim::~PopAnim() */

void __thiscall Sexy::PopAnim::~PopAnim(PopAnim *this)

{
  *(undefined ***)this = &PTR_GetClass_06a2ef10;
  Clear(this);
  std::string::~string((string *)(this + 0x48));
  BaseResource::~BaseResource((BaseResource *)this);
  return;
}


/* Sexy::PopAnim::~PopAnim() */

void __thiscall Sexy::PopAnim::~PopAnim(PopAnim *this)

{
  ~PopAnim(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PopAnim::Load_Init() */

void __thiscall Sexy::PopAnim::Load_Init(PopAnim *this)

{
  long lVar1;
  PASpriteInst *this_00;
  PopAnimDef *this_01;
  undefined8 uStack_18;
  undefined8 uStack_10;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  Color::Color((Color *)&uStack_18,1);
  this[0xa2] = (PopAnim)0x0;
  lVar1 = *(long *)(this + 0x58);
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x90) = uStack_18;
  *(undefined8 *)(this + 0x98) = uStack_10;
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x60) == 0) {
      std::vector<Sexy::PASpriteDef,std::allocator<Sexy::PASpriteDef>>::clear
                ((vector<Sexy::PASpriteDef,std::allocator<Sexy::PASpriteDef>> *)(lVar1 + 8));
      this_01 = *(PopAnimDef **)(this + 0x58);
      if (this_01 != (PopAnimDef *)0x0) {
        PopAnimDef::~PopAnimDef(this_01);
        AK::FreeHook(this_01);
      }
    }
    else {
      *(int *)(lVar1 + 0x60) = *(int *)(lVar1 + 0x60) + -1;
    }
  }
  this_00 = *(PASpriteInst **)(this + 0x50);
  *(undefined8 *)(this + 0x58) = 0;
  this[0xa1] = (PopAnim)0x1;
  if (this_00 != (PASpriteInst *)0x0) {
    PASpriteInst::~PASpriteInst(this_00);
    AK::FreeHook(this_00);
  }
  *(undefined8 *)(this + 0x50) = 0;
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::PopAnim::GetLabelFrame(std::string const&) */

void __thiscall Sexy::PopAnim::GetLabelFrame(PopAnim *this,string *param_1)

{
  PASpriteDef::GetLabelFrame((PASpriteDef *)**(undefined8 **)(this + 0x58),param_1);
  return;
}


/* Sexy::PopAnim::InitSpriteInst(Sexy::PASpriteInst*, Sexy::PASpriteDef*) */

void __thiscall
Sexy::PopAnim::InitSpriteInst(PopAnim *this,PASpriteInst *param_1,PASpriteDef *param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  PASpriteInst *this_00;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  PASpriteDef *pPVar8;
  
  *(PASpriteDef **)(param_1 + 0x18) = param_2;
  param_1[0xb] = (PASpriteInst)0x1;
  param_1[10] = (PASpriteInst)0x1;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = 0;
  lVar5 = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  std::vector<Sexy::PAObjectInst,std::allocator<Sexy::PAObjectInst>>::clear
            ((vector<Sexy::PAObjectInst,std::allocator<Sexy::PAObjectInst>> *)(param_1 + 0x48));
  uVar2 = FUN_05172ac0(*(undefined8 *)(param_2 + 0x60),*(undefined8 *)(param_2 + 0x68));
  std::vector<Sexy::PAObjectInst,std::allocator<Sexy::PAObjectInst>>::resize
            ((vector<Sexy::PAObjectInst,std::allocator<Sexy::PAObjectInst>> *)(param_1 + 0x48),uVar2
            );
  do {
    uVar7 = *(undefined8 *)(param_2 + 0x60);
    iVar1 = FUN_05172ac0(uVar7,*(undefined8 *)(param_2 + 0x68));
    lVar6 = lVar5;
    if (iVar1 <= (int)lVar5) {
      return;
    }
    while( true ) {
      puVar3 = (undefined8 *)FUN_05172acc(uVar7,lVar6);
      lVar5 = lVar6 + 1;
      puVar4 = (undefined8 *)FUN_05172aa8(*(undefined8 *)(param_1 + 0x48),lVar6);
      pPVar8 = (PASpriteDef *)puVar3[1];
      *puVar4 = *puVar3;
      *(undefined1 *)(puVar4 + 7) = 0;
      if (pPVar8 == (PASpriteDef *)0x0) break;
      this_00 = ::operator_new(0x60);
      PASpriteInst::PASpriteInst(this_00);
      *(PASpriteInst **)this_00 = param_1;
      InitSpriteInst(this,this_00,pPVar8);
      puVar4[1] = this_00;
      uVar7 = *(undefined8 *)(param_2 + 0x60);
      iVar1 = FUN_05172ac0(uVar7,*(undefined8 *)(param_2 + 0x68));
      lVar6 = lVar5;
      if (iVar1 <= (int)lVar5) {
        return;
      }
    }
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PopAnim::SetupSpriteInst(std::string const&) */

void __thiscall Sexy::PopAnim::SetupSpriteInst(PopAnim *this,string *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  PASpriteDef *pPVar4;
  char *__s2;
  undefined8 *puVar5;
  undefined8 uVar6;
  PASpriteDef *pPVar7;
  PASpriteInst *pPVar8;
  char *__s1;
  string asStack_10 [8];
  long local_8;
  
  pPVar8 = *(PASpriteInst **)(this + 0x50);
  local_8 = ___stack_chk_guard;
  if (pPVar8 == (PASpriteInst *)0x0) {
    uVar6 = 0;
  }
  else {
    if (*(long *)(pPVar8 + 0x18) != 0) {
      lVar3 = FUN_05474184(param_1);
      uVar6 = 1;
      if (lVar3 == 0) goto LAB_0517807c;
    }
    puVar5 = *(undefined8 **)(this + 0x58);
    pPVar7 = (PASpriteDef *)*puVar5;
    if (pPVar7 == (PASpriteDef *)0x0) {
      lVar3 = FUN_05172b5c(puVar5[1],puVar5[2]);
      uVar6 = 0;
      if (lVar3 != 0) {
        FUN_05475d88(asStack_10,param_1);
        lVar3 = FUN_05474184(asStack_10);
        if (lVar3 == 0) {
          std::string::append(asStack_10,"main",(size_t)pPVar7);
        }
        pPVar7 = (PASpriteDef *)0x0;
        uVar6 = *(undefined8 *)(*(long *)(this + 0x58) + 8);
        iVar1 = FUN_05172b5c(uVar6,*(undefined8 *)(*(long *)(this + 0x58) + 0x10));
        for (lVar3 = 0; (int)lVar3 < iVar1; lVar3 = lVar3 + 1) {
          pPVar4 = (PASpriteDef *)FUN_05172ad4(uVar6,lVar3);
          __s1 = *(char **)pPVar4;
          if (__s1 != (char *)0x0) {
            __s2 = (char *)FUN_0547429c(asStack_10);
            iVar2 = strcasecmp(__s1,__s2);
            if (iVar2 == 0) {
              pPVar7 = pPVar4;
            }
          }
        }
        if (pPVar7 == (PASpriteDef *)0x0) {
          pPVar7 = (PASpriteDef *)FUN_05172ad4(uVar6,0);
        }
        pPVar8 = *(PASpriteInst **)(this + 0x50);
        if (*(PASpriteDef **)(pPVar8 + 0x18) != pPVar7) {
          if (*(PASpriteDef **)(pPVar8 + 0x18) != (PASpriteDef *)0x0) {
            PASpriteInst::~PASpriteInst(pPVar8);
            AK::FreeHook(pPVar8);
            pPVar8 = ::operator_new(0x60);
            PASpriteInst::PASpriteInst(pPVar8);
            *(PASpriteInst **)(this + 0x50) = pPVar8;
            *(undefined8 *)pPVar8 = 0;
          }
          InitSpriteInst(this,pPVar8,pPVar7);
          this[0xa1] = (PopAnim)0x1;
        }
        std::string::~string(asStack_10);
        uVar6 = 1;
      }
    }
    else {
      InitSpriteInst(this,pPVar8,pPVar7);
      uVar6 = 1;
    }
  }
LAB_0517807c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PopAnim::Play(int, bool) */

void __thiscall Sexy::PopAnim::Play(PopAnim *this,int param_1,bool param_2)

{
  char cVar1;
  int iVar2;
  PAObjectPos *pPVar3;
  float fVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"");
  cVar1 = SetupSpriteInst(this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (cVar1 != '\0') {
    pPVar3 = *(PAObjectPos **)(this + 0x50);
    iVar2 = FUN_05172a7c(*(undefined8 *)(*(long *)(pPVar3 + 0x18) + 0x10),
                         *(undefined8 *)(*(long *)(pPVar3 + 0x18) + 0x18));
    if (param_1 < iVar2) {
      if ((*(float *)(pPVar3 + 0xc) != (float)param_1) && (param_2)) {
        ResetAnim(this);
        pPVar3 = *(PAObjectPos **)(this + 0x50);
      }
      fVar4 = *(float *)(this + 0x68);
      this[0xa3] = (PopAnim)0x0;
      this[0xa2] = (PopAnim)0x1;
      *(undefined2 *)(pPVar3 + 8) = 0;
      *(undefined4 *)(pPVar3 + 0x10) = 0;
      *(float *)(pPVar3 + 0xc) = (float)param_1;
      if (fVar4 == 0.0) {
        DoFramesHit((PASpriteInst *)this,pPVar3);
      }
    }
    else {
      this[0xa2] = (PopAnim)0x0;
      cVar1 = '\0';
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PopAnim::Play(std::string const&, bool) */

void __thiscall Sexy::PopAnim::Play(PopAnim *this,string *param_1,bool param_2)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  long lVar4;
  string asStack_10 [8];
  long local_8;
  
  lVar4 = **(long **)(this + 0x58);
  local_8 = ___stack_chk_guard;
  this[0xa2] = (PopAnim)0x0;
  if (lVar4 == 0) {
    SetupSpriteInst(this,param_1);
    uVar2 = Play(this,*(int *)(*(long *)(*(long *)(this + 0x50) + 0x18) + 0x28),param_2);
  }
  else {
    std::string::string(asStack_10,"");
    cVar1 = SetupSpriteInst(this,asStack_10);
    std::string::~string(asStack_10);
    nop();
    if ((cVar1 == '\0') ||
       (iVar3 = PASpriteDef::GetLabelFrame((PASpriteDef *)**(undefined8 **)(this + 0x58),param_1),
       iVar3 == -1)) {
      uVar2 = 0;
    }
    else {
      thunk_FUN_05475e00(this + 0x48,param_1);
      uVar2 = Play(this,iVar3,param_2);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PopAnim::GetObjectInst(std::string const&) */

void __thiscall Sexy::PopAnim::GetObjectInst(PopAnim *this,string *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"");
  SetupSpriteInst(this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  PASpriteInst::GetObjectInst(*(PASpriteInst **)(this + 0x50),param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PopAnim::Draw(Sexy::Graphics*) */

void __thiscall Sexy::PopAnim::Draw(PopAnim *this,Graphics *param_1)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  string asStack_28 [8];
  PATransform aPStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(char *)(*(long *)(this + 0x58) + 0x68) != '\0') {
    std::string::string(asStack_28,"");
    cVar1 = SetupSpriteInst(this,asStack_28);
    std::string::~string(asStack_28);
    nop();
    if (cVar1 != '\0') {
      if (this[0xa1] != (PopAnim)0x0) {
        UpdateTransforms(this);
        this[0xa1] = (PopAnim)0x0;
      }
      fVar2 = *(float *)(this + 0x28);
      if ((fVar2 <= 0.98) || (1.02 <= fVar2)) {
        fVar6 = *(float *)(this + 0x6c);
        fVar5 = *(float *)(this + 0x70);
        fVar4 = *(float *)(this + 0x78);
        fVar3 = *(float *)(this + 0x7c);
        *(float *)(this + 0x6c) = fVar6 * fVar2;
        *(float *)(this + 0x70) = fVar5 * fVar2;
        *(float *)(this + 0x78) = fVar4 * fVar2;
        *(float *)(this + 0x7c) = fVar3 * fVar2;
        PATransform::PATransform(aPStack_20);
        PopTransformMatrix::operator=((PopTransformMatrix *)aPStack_20,(SexyMatrix3 *)(this + 0x6c))
        ;
        DrawSprite(this,param_1,*(PASpriteInst **)(this + 0x50),aPStack_20,(Color *)(this + 0x90),
                   (bool)this[0xa0]);
        *(float *)(this + 0x6c) = fVar6;
        *(float *)(this + 0x70) = fVar5;
        *(float *)(this + 0x78) = fVar4;
        *(float *)(this + 0x7c) = fVar3;
      }
      else {
        PATransform::PATransform(aPStack_20);
        PopTransformMatrix::operator=((PopTransformMatrix *)aPStack_20,(SexyMatrix3 *)(this + 0x6c))
        ;
        DrawSprite(this,param_1,*(PASpriteInst **)(this + 0x50),aPStack_20,(Color *)(this + 0x90),
                   (bool)this[0xa0]);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PopAnim::DrawReplaceLayerWithImage(Sexy::Graphics*, std::string const&, Sexy::Image*) */

void __thiscall
Sexy::PopAnim::DrawReplaceLayerWithImage
          (PopAnim *this,Graphics *param_1,string *param_2,Image *param_3)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  string asStack_28 [8];
  PATransform aPStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(char *)(*(long *)(this + 0x58) + 0x68) != '\0') {
    std::string::string(asStack_28,"");
    cVar1 = SetupSpriteInst(this,asStack_28);
    std::string::~string(asStack_28);
    nop();
    if (cVar1 != '\0') {
      if (this[0xa1] != (PopAnim)0x0) {
        UpdateTransforms(this);
        this[0xa1] = (PopAnim)0x0;
      }
      fVar2 = *(float *)(this + 0x28);
      if ((fVar2 <= 0.98) || (1.02 <= fVar2)) {
        fVar6 = *(float *)(this + 0x6c);
        fVar5 = *(float *)(this + 0x70);
        fVar4 = *(float *)(this + 0x78);
        fVar3 = *(float *)(this + 0x7c);
        *(float *)(this + 0x6c) = fVar6 * fVar2;
        *(float *)(this + 0x70) = fVar5 * fVar2;
        *(float *)(this + 0x78) = fVar4 * fVar2;
        *(float *)(this + 0x7c) = fVar3 * fVar2;
        PATransform::PATransform(aPStack_20);
        PopTransformMatrix::operator=((PopTransformMatrix *)aPStack_20,(SexyMatrix3 *)(this + 0x6c))
        ;
        DrawSpriteReplaceLayerWithImage
                  (this,param_1,*(PASpriteInst **)(this + 0x50),aPStack_20,(Color *)(this + 0x90),
                   (bool)this[0xa0],param_2,param_3);
        *(float *)(this + 0x6c) = fVar6;
        *(float *)(this + 0x70) = fVar5;
        *(float *)(this + 0x78) = fVar4;
        *(float *)(this + 0x7c) = fVar3;
      }
      else {
        PATransform::PATransform(aPStack_20);
        PopTransformMatrix::operator=((PopTransformMatrix *)aPStack_20,(SexyMatrix3 *)(this + 0x6c))
        ;
        DrawSpriteReplaceLayerWithImage
                  (this,param_1,*(PASpriteInst **)(this + 0x50),aPStack_20,(Color *)(this + 0x90),
                   (bool)this[0xa0],param_2,param_3);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PopAnim::BlendTo(std::string const&, float, float) */

void __thiscall Sexy::PopAnim::BlendTo(PopAnim *this,string *param_1,float param_2,float param_3)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  int *piVar6;
  PAObjectPos *pPVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  PASpriteInst *pPVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  string asStack_68 [48];
  pair<std::string_const,BlendSrcData> apStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_68,"");
  cVar1 = SetupSpriteInst(this,asStack_68);
  std::string::~string(asStack_68);
  nop();
  if (cVar1 == '\0') goto LAB_0517904c;
  if (this[0xa1] != (PopAnim)0x0) {
    UpdateTransforms(this);
    this[0xa1] = (PopAnim)0x0;
  }
  lVar11 = 0;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)asStack_68);
  puVar5 = (undefined8 *)
           FUN_05172ab0(*(undefined8 *)(*(long *)(*(long *)(this + 0x50) + 0x18) + 0x10),
                        (long)(int)*(float *)(*(long *)(this + 0x50) + 0xc));
  PATransform::PATransform((PATransform *)&local_a8);
  Color::Color((Color *)&local_b8);
  uVar13 = *puVar5;
  iVar4 = FUN_05172b10(uVar13,puVar5[1]);
  if (0 < iVar4) {
    do {
      piVar6 = (int *)FUN_05172b1c(uVar13,lVar11);
      pPVar12 = *(PASpriteInst **)(this + 0x50);
      pPVar7 = (PAObjectPos *)
               FUN_05172b04(*(undefined8 *)(*(long *)(pPVar12 + 0x18) + 0x78),(long)*piVar6);
      lVar8 = FUN_05172aa8(*(undefined8 *)(pPVar12 + 0x48),(long)*(int *)pPVar7);
      lVar10 = *(long *)(lVar8 + 8);
      if (lVar10 != 0) {
        lVar14 = *(long *)(lVar10 + 0x18);
        if (pPVar7[6] == (PAObjectPos)0x0) {
          CalcObjectPos(this,pPVar12,pPVar7,(PATransform *)&local_a8,(Color *)&local_b8);
        }
        else {
          local_b8 = *(undefined8 *)(lVar10 + 0x20);
          uStack_b0 = *(undefined8 *)(lVar10 + 0x28);
          local_98 = *(undefined8 *)(lVar10 + 0x40);
          local_a8 = *(undefined8 *)(lVar10 + 0x30);
          uStack_a0 = *(undefined8 *)(lVar10 + 0x38);
        }
        BlendSrcData::BlendSrcData((BlendSrcData *)&local_90);
        local_80 = local_98;
        local_90 = local_a8;
        uStack_88 = uStack_a0;
        local_78 = local_b8;
        uStack_70 = uStack_b0;
        if (*(long *)(lVar8 + 8) != 0) {
          std::pair<std::string_const,BlendSrcData>::pair<BlendSrcData&,void>
                    (apStack_38,(string *)(lVar14 + 8),(BlendSrcData *)&local_90);
          std::
          multimap<std::string,BlendSrcData,std::less<std::string>,std::allocator<std::pair<std::string_const,BlendSrcData>>>
          ::insert<std::pair<std::string_const,BlendSrcData>,void>
                    ((multimap<std::string,BlendSrcData,std::less<std::string>,std::allocator<std::pair<std::string_const,BlendSrcData>>>
                      *)asStack_68,(pair *)apStack_38);
          std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                    ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_38);
        }
        uVar13 = *puVar5;
        iVar4 = FUN_05172b10(uVar13,puVar5[1]);
      }
      lVar11 = lVar11 + 1;
    } while ((int)lVar11 < iVar4);
  }
  *(float *)(this + 0x60) = param_2;
  lVar11 = **(long **)(this + 0x58);
  *(float *)(this + 0x68) = param_3;
  *(undefined4 *)(this + 100) = 0;
  if (lVar11 == 0) {
    SetupSpriteInst(this,param_1);
    Play(this,*(int *)(*(long *)(*(long *)(this + 0x50) + 0x18) + 0x28),false);
LAB_051790f8:
    lVar8 = *(long *)(this + 0x50);
    iVar4 = FUN_05172ac0(*(undefined8 *)(*(long *)(lVar8 + 0x18) + 0x60),
                         *(undefined8 *)(*(long *)(lVar8 + 0x18) + 0x68));
    for (lVar11 = 0; (int)lVar11 < iVar4; lVar11 = lVar11 + 1) {
      lVar10 = FUN_05172aa8(*(undefined8 *)(lVar8 + 0x48),lVar11);
      if (*(long *)(lVar10 + 8) != 0) {
        local_c8 = std::
                   multimap<std::string,BlendSrcData,std::less<std::string>,std::allocator<std::pair<std::string_const,BlendSrcData>>>
                   ::find((multimap<std::string,BlendSrcData,std::less<std::string>,std::allocator<std::pair<std::string_const,BlendSrcData>>>
                           *)asStack_68,(string *)(*(long *)(*(long *)(lVar10 + 8) + 0x18) + 8));
        local_c0 = std::
                   map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)asStack_68);
        bVar3 = eastl::operator!=((rbtree_iterator *)&local_c8,(rbtree_iterator *)&local_c0);
        if (bVar3) {
          *(undefined1 *)(lVar10 + 0x38) = 1;
          lVar8 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                            ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_c8);
          uVar13 = *(undefined8 *)(lVar8 + 0x28);
          *(undefined8 *)(lVar10 + 0x10) = *(undefined8 *)(lVar8 + 0x20);
          *(undefined8 *)(lVar10 + 0x18) = uVar13;
          lVar8 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                            ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_c8);
          uVar9 = *(undefined8 *)(lVar8 + 0x18);
          uVar13 = *(undefined8 *)(lVar8 + 0x10);
          *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)(lVar8 + 8);
          *(undefined8 *)(lVar10 + 0x28) = uVar13;
          *(undefined8 *)(lVar10 + 0x30) = uVar9;
        }
        else {
          *(bool *)(lVar10 + 0x38) = bVar3;
        }
        lVar8 = *(long *)(this + 0x50);
        iVar4 = FUN_05172ac0(*(undefined8 *)(*(long *)(lVar8 + 0x18) + 0x60),
                             *(undefined8 *)(*(long *)(lVar8 + 0x18) + 0x68));
      }
    }
    while (lVar11 = std::
                    multimap<std::string,BlendSrcData,std::less<std::string>,std::allocator<std::pair<std::string_const,BlendSrcData>>>
                    ::size((multimap<std::string,BlendSrcData,std::less<std::string>,std::allocator<std::pair<std::string_const,BlendSrcData>>>
                            *)asStack_68), lVar11 != 0) {
      uVar13 = std::
               multimap<std::string,BlendSrcData,std::less<std::string>,std::allocator<std::pair<std::string_const,BlendSrcData>>>
               ::begin((multimap<std::string,BlendSrcData,std::less<std::string>,std::allocator<std::pair<std::string_const,BlendSrcData>>>
                        *)asStack_68);
      std::
      multimap<std::string,BlendSrcData,std::less<std::string>,std::allocator<std::pair<std::string_const,BlendSrcData>>>
      ::erase_abi_cxx11_(asStack_68,uVar13);
    }
  }
  else {
    std::string::string((string *)&local_c0,"");
    cVar2 = SetupSpriteInst(this,(string *)&local_c0);
    std::string::~string((string *)&local_c0);
    nop();
    if ((cVar2 != '\0') &&
       (iVar4 = PASpriteDef::GetLabelFrame((PASpriteDef *)**(undefined8 **)(this + 0x58),param_1),
       iVar4 != -1)) {
      thunk_FUN_05475e00(this + 0x48,param_1);
      Play(this,iVar4,false);
      this[0xa1] = (PopAnim)0x1;
      goto LAB_051790f8;
    }
    cVar1 = '\0';
  }
  std::
  multimap<std::string,BlendSrcData,std::less<std::string>,std::allocator<std::pair<std::string_const,BlendSrcData>>>
  ::~multimap((multimap<std::string,BlendSrcData,std::less<std::string>,std::allocator<std::pair<std::string_const,BlendSrcData>>>
               *)asStack_68);
LAB_0517904c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PopAnim::Load_GetImageHook(std::string const&, std::string const&) */

void Sexy::PopAnim::Load_GetImageHook(string *param_1,string *param_2)

{
  undefined8 uVar1;
  int iVar2;
  Image *pIVar3;
  string *psVar4;
  long lVar5;
  char *pcVar6;
  MemoryImage *pMVar7;
  _func_void *extraout_x1;
  RtMixedPtr *__n;
  RtId *in_x8;
  long lVar8;
  string asStack_60 [8];
  RtMixedPtr aRStack_58 [16];
  undefined8 local_48;
  undefined8 local_40;
  string asStack_30 [32];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_48);
  lVar8 = 0;
  std::string::string(asStack_30,"images\\");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)&local_48,asStack_30);
  std::string::~string(asStack_30);
  nop();
  __n = aRStack_58;
  std::string::string(asStack_30,"");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)&local_48,asStack_30);
  std::string::~string(asStack_30);
  nop();
  do {
    uVar1 = local_48;
    iVar2 = FUN_05172b34(local_48,local_40);
    if (iVar2 <= (int)lVar8) {
      FUN_031f5e7c(asStack_30,"Unable to load image: ");
      Fail(param_1);
      std::string::~string(asStack_30);
      std::__exception_ptr::exception_ptr::exception_ptr((exception_ptr *)asStack_30,extraout_x1);
      RtMixedPtr<Sexy::Image>::RtMixedPtr(in_x8,SUB81(asStack_30,0));
      RtId::~RtId((RtId *)asStack_30);
LAB_05179e28:
      std::vector<std::string,std::allocator<std::string>>::~vector
                ((vector<std::string,std::allocator<std::string>> *)&local_48);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    psVar4 = (string *)FUN_05172b40(uVar1,lVar8);
    GetPathFrom(psVar4,param_2);
    lVar5 = FUN_05474184(asStack_60);
    if ((lVar5 != 0) && (pcVar6 = (char *)FUN_05474ee8(asStack_60,lVar5 + -1), *pcVar6 != '\\')) {
      lVar5 = FUN_05474184(asStack_60);
      pcVar6 = (char *)FUN_05474ee8(asStack_60,lVar5 + -1);
      if (*pcVar6 != '/') {
        FUN_05475ad8(asStack_60,&DAT_055fe318);
      }
    }
    lVar8 = lVar8 + 1;
    thunk_FUN_054757c0(asStack_60);
    ResourceManager::GetImageOptions::GetImageOptions((GetImageOptions *)asStack_30);
    std::string::append(asStack_10,"",(size_t)__n);
    RtMixedPtr<Sexy::Image>::RtMixedPtr();
    __n = (RtMixedPtr *)asStack_60;
    ResourceManager::GetImage
              (*(ResourceManager **)(gSexyAppBase + 0x848),aRStack_58,asStack_60,
               (GetImageOptions *)asStack_30,(bool *)0x0);
    pIVar3 = RtMixedPtr::operator_cast_to_Image_(aRStack_58);
    if (pIVar3 != (Image *)0x0) {
      pIVar3 = RtMixedPtr::operator_cast_to_Image_(aRStack_58);
      pMVar7 = RtObject::Cast<Sexy::MemoryImage>((RtObject *)pIVar3);
      if (pMVar7 != (MemoryImage *)0x0) {
        (**(code **)(*(long *)pMVar7 + 0x140))();
      }
      RtMixedPtr<Sexy::Image>::RtMixedPtr((RtMixedPtr<Sexy::Image> *)in_x8,aRStack_58);
      RtMixedPtr<Sexy::Image>::~RtMixedPtr((RtMixedPtr<Sexy::Image> *)aRStack_58);
      ResourceManager::GetImageOptions::~GetImageOptions((GetImageOptions *)asStack_30);
      std::string::~string(asStack_60);
      goto LAB_05179e28;
    }
    RtMixedPtr<Sexy::Image>::~RtMixedPtr((RtMixedPtr<Sexy::Image> *)aRStack_58);
    ResourceManager::GetImageOptions::~GetImageOptions((GetImageOptions *)asStack_30);
    std::string::~string(asStack_60);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PopAnim::Load_GetImage(Sexy::PAImage*, std::string const&, std::string const&) */

void Sexy::PopAnim::Load_GetImage(PAImage *param_1,string *param_2,string *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  Image *pIVar5;
  DeviceImage *pDVar6;
  undefined8 uVar7;
  float fVar8;
  RtMixedPtr<Sexy::Image> aRStack_18 [16];
  long local_8;
  
  uVar7 = 0;
  local_8 = ___stack_chk_guard;
  Load_GetImageHook((string *)param_1,param_3);
  cVar4 = RtMixedPtr<Sexy::Image>::operator!(aRStack_18);
  if (cVar4 == '\0') {
    pIVar5 = RtMixedPtr::operator_cast_to_Image_((RtMixedPtr *)aRStack_18);
    *(undefined4 *)(pIVar5 + 0x44) = *(undefined4 *)(param_2 + 0x10);
    pIVar5 = RtMixedPtr::operator_cast_to_Image_((RtMixedPtr *)aRStack_18);
    iVar1 = *(int *)(param_2 + 8);
    *(undefined4 *)(pIVar5 + 0x40) = *(undefined4 *)(param_2 + 0x14);
    if ((iVar1 != -1) && (*(int *)(param_2 + 0xc) != -1)) {
      fVar8 = *(float *)(param_1 + 0x2c);
      pIVar5 = RtMixedPtr::operator_cast_to_Image_((RtMixedPtr *)aRStack_18);
      iVar2 = *(int *)(pIVar5 + 0x38);
      pIVar5 = RtMixedPtr::operator_cast_to_Image_((RtMixedPtr *)aRStack_18);
      iVar3 = *(int *)(param_2 + 0xc);
      *(float *)(param_2 + 0x2c) =
           *(float *)(param_2 + 0x2c) +
           ((float)iVar1 * fVar8 - (float)iVar2) / (float)(*(int *)(pIVar5 + 0x44) + 1);
      fVar8 = *(float *)(param_1 + 0x2c);
      pIVar5 = RtMixedPtr::operator_cast_to_Image_((RtMixedPtr *)aRStack_18);
      iVar1 = *(int *)(pIVar5 + 0x3c);
      pIVar5 = RtMixedPtr::operator_cast_to_Image_((RtMixedPtr *)aRStack_18);
      *(float *)(param_2 + 0x38) =
           *(float *)(param_2 + 0x38) +
           ((float)iVar3 * fVar8 - (float)iVar1) / (float)(*(int *)(pIVar5 + 0x40) + 1);
    }
    uVar7 = 1;
    pIVar5 = RtMixedPtr::operator_cast_to_Image_((RtMixedPtr *)aRStack_18);
    pDVar6 = RtObject::Cast<Sexy::DeviceImage>((RtObject *)pIVar5);
    *(DeviceImage **)param_2 = pDVar6;
  }
  RtMixedPtr<Sexy::Image>::~RtMixedPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PopAnim::LoadSpriteDef(Sexy::Buffer*, Sexy::PASpriteDef*) */

void __thiscall Sexy::PopAnim::LoadSpriteDef(PopAnim *this,Buffer *param_1,PASpriteDef *param_2)

{
  vector<Sexy::PAObjectPos,std::allocator<Sexy::PAObjectPos>> *this_00;
  vector<Sexy::PAObjectDef,std::allocator<Sexy::PAObjectDef>> *this_01;
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  byte bVar4;
  short sVar5;
  short sVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  int *piVar13;
  vector<int,std::allocator<int>> *this_02;
  ulong uVar14;
  undefined4 *puVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  string *extraout_x1;
  int iVar19;
  undefined8 uVar20;
  long lVar21;
  ulong uVar22;
  float fVar23;
  float fVar24;
  uint uVar25;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  int local_f8;
  uint local_f4;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0 [2];
  undefined8 local_d0;
  undefined8 local_c8;
  uint local_b8;
  ushort local_b4;
  char local_b2;
  byte local_b1;
  undefined1 local_b0;
  undefined1 local_af;
  undefined1 local_ae;
  undefined1 local_ad;
  pair<int_const,Sexy::PAObjectPos> apStack_90 [8];
  float local_88;
  float local_7c;
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_68 [48];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (vector<Sexy::PAObjectPos,std::allocator<Sexy::PAObjectPos>> *)(param_2 + 0x78);
  this_01 = (vector<Sexy::PAObjectDef,std::allocator<Sexy::PAObjectDef>> *)(param_2 + 0x60);
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_68);
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  std::vector<Sexy::PAObjectPos,std::allocator<Sexy::PAObjectPos>>::reserve(this_00,0x200);
  std::vector<Sexy::PAObjectDef,std::allocator<Sexy::PAObjectDef>>::reserve(this_01,0x40);
  lVar21 = *(long *)(this + 0x58);
  iVar12 = *(int *)(lVar21 + 100);
  if (5 < iVar12) {
    Buffer::ReadString();
    FUN_05474278(param_2 + 8,(string *)&local_d0);
    std::string::~string((string *)&local_d0);
    lVar21 = *(long *)(this + 0x58);
    iVar12 = *(int *)(lVar21 + 100);
  }
  if (iVar12 < 4) {
    iVar12 = *(int *)(this + 0x30);
    *(undefined8 *)param_2 = 0;
    *(float *)(param_2 + 0x90) = (float)iVar12;
  }
  else {
    Buffer::ReadString();
    std::vector<std::string,std::allocator<std::string>>::push_back
              ((vector<std::string,std::allocator<std::string>> *)(lVar21 + 0x20),
               (string *)&local_d0);
    std::string::~string((string *)&local_d0);
    std::
    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
    ::back((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            *)(*(long *)(this + 0x58) + 0x20));
    uVar18 = FUN_0547429c();
    *(undefined8 *)param_2 = uVar18;
    iVar12 = Buffer::ReadInt32(param_1);
    *(float *)(param_2 + 0x90) = (float)iVar12 * 1.5258789e-05;
  }
  sVar5 = Buffer::ReadInt16(param_1);
  iVar12 = (int)sVar5;
  if (*(int *)(*(long *)(this + 0x58) + 100) < 5) {
    iVar9 = 0;
    *(undefined4 *)(param_2 + 0x28) = 0;
    iVar19 = iVar12 + -1;
    *(int *)(param_2 + 0x2c) = iVar19;
  }
  else {
    sVar6 = Buffer::ReadInt16(param_1);
    *(int *)(param_2 + 0x28) = (int)sVar6;
    sVar6 = Buffer::ReadInt16(param_1);
    iVar9 = *(int *)(param_2 + 0x28);
    iVar19 = (int)sVar6;
    *(int *)(param_2 + 0x2c) = iVar19;
  }
  local_d0 = CONCAT44(local_d0._4_4_,iVar12 + -1);
  local_e0[0] = CONCAT44(local_e0[0]._4_4_,iVar19 + iVar9);
  piVar13 = eastl::min_alt<int>((int *)local_e0,(int *)&local_d0);
  *(int *)(param_2 + 0x2c) = *piVar13 - iVar9;
  std::vector<Sexy::PAFrame,std::allocator<Sexy::PAFrame>>::resize
            ((vector<Sexy::PAFrame,std::allocator<Sexy::PAFrame>> *)(param_2 + 0x10),(long)sVar5);
  local_f8 = 0;
  if (iVar12 < 1) {
    std::vector<Sexy::PAObjectPos,std::allocator<Sexy::PAObjectPos>>::shrink_to_fit(this_00);
    std::vector<Sexy::PAObjectDef,std::allocator<Sexy::PAObjectDef>>::shrink_to_fit(this_01);
    if (iVar12 == 0) {
      std::vector<Sexy::PAFrame,std::allocator<Sexy::PAFrame>>::resize
                ((vector<Sexy::PAFrame,std::allocator<Sexy::PAFrame>> *)(param_2 + 0x10),1);
    }
  }
  else {
    do {
      this_02 = (vector<int,std::allocator<int>> *)
                FUN_05172ab0(*(undefined8 *)(param_2 + 0x10),(long)local_f8);
      uVar7 = Buffer::ReadByte(param_1);
      uVar8 = uVar7 & 0xff;
      if ((uVar7 & 1) != 0) {
        bVar4 = Buffer::ReadByte(param_1);
        uVar7 = (uint)bVar4;
        if (bVar4 == 0xff) {
          sVar5 = Buffer::ReadInt16(param_1);
          uVar7 = (uint)sVar5;
        }
        if (0 < (int)uVar7) {
          uVar25 = 0;
          do {
            sVar5 = Buffer::ReadInt16(param_1);
            local_f0 = CONCAT44(local_f0._4_4_,(int)sVar5);
            if (0x7fe < sVar5) {
              uVar11 = Buffer::ReadInt32(param_1);
              local_f0 = CONCAT44(local_f0._4_4_,uVar11);
            }
            local_e8 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                       find((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                            amStack_38,(int *)&local_f0);
            local_d0 = std::
                       map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              *)amStack_38);
            bVar2 = eastl::operator!=((rbtree_iterator *)&local_e8,(rbtree_iterator *)&local_d0);
            if (bVar2) {
              std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
              erase_abi_cxx11_(amStack_38,local_e8);
            }
            local_e0[0] = std::
                          map<int,Sexy::PAObjectPos,std::less<int>,std::allocator<std::pair<int_const,Sexy::PAObjectPos>>>
                          ::find((map<int,Sexy::PAObjectPos,std::less<int>,std::allocator<std::pair<int_const,Sexy::PAObjectPos>>>
                                  *)amStack_68,(int *)&local_f0);
            local_d0 = std::
                       map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              *)amStack_68);
            bVar2 = eastl::operator!=((rbtree_iterator *)local_e0,(rbtree_iterator *)&local_d0);
            if (bVar2) {
              std::
              map<int,Sexy::PAObjectPos,std::less<int>,std::allocator<std::pair<int_const,Sexy::PAObjectPos>>>
              ::erase_abi_cxx11_(amStack_68,local_e0[0]);
            }
            uVar25 = uVar25 + 1;
          } while (uVar25 != uVar7);
        }
      }
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_d0);
      if ((uVar8 >> 1 & 1) != 0) {
        uVar7 = Buffer::ReadByte(param_1);
        uVar7 = uVar7 & 0xff;
        if (uVar7 == 0xff) {
          sVar5 = Buffer::ReadInt16(param_1);
          uVar7 = (uint)sVar5;
        }
        if (0 < (int)uVar7) {
          uVar25 = 0;
          do {
            PAObjectPos::PAObjectPos((PAObjectPos *)&local_b8);
            uVar10 = Buffer::ReadInt16(param_1);
            local_b8 = uVar10 & 0x7ff;
            if (local_b8 == 0x7ff) {
              local_b8 = Buffer::ReadInt32(param_1);
            }
            local_b1 = (byte)(uVar10 >> 8) >> 6 & 1;
            local_b2 = (char)((uVar10 & 0xffff) >> 0xf);
            local_b4 = Buffer::ReadByte(param_1);
            local_b4 = local_b4 & 0xff;
            if (local_b4 == 0xff) {
              local_b4 = Buffer::ReadInt16(param_1);
            }
            local_b0 = 0xff;
            local_af = 0xff;
            local_ae = 0xff;
            local_ad = 0xff;
            uVar10 = uVar10 & 0xffff;
            if ((uVar10 >> 0xd & 1) != 0) {
              Buffer::ReadInt16(param_1);
            }
            uVar18 = 0;
            if ((uVar10 >> 0xc & 1) != 0) {
              lVar21 = *(long *)(this + 0x58);
              Buffer::ReadString();
              std::vector<std::string,std::allocator<std::string>>::push_back
                        ((vector<std::string,std::allocator<std::string>> *)(lVar21 + 0x20),
                         (string *)local_e0);
              std::string::~string((string *)local_e0);
              std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::back((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(*(long *)(this + 0x58) + 0x20));
              uVar18 = FUN_0547429c();
            }
            if ((uVar10 >> 0xb & 1) != 0) {
              Buffer::ReadInt32(param_1);
            }
            uVar10 = local_b8;
            uVar20 = *(undefined8 *)(param_2 + 0x60);
            iVar9 = FUN_05172ac0(uVar20,*(undefined8 *)(param_2 + 0x68));
            if (iVar9 <= (int)uVar10) {
              std::vector<Sexy::PAObjectDef,std::allocator<Sexy::PAObjectDef>>::resize
                        (this_01,(long)(int)(uVar10 + 1));
              uVar20 = *(undefined8 *)(param_2 + 0x60);
              uVar10 = local_b8;
            }
            puVar17 = (undefined8 *)FUN_05172acc(uVar20,(long)(int)uVar10);
            *puVar17 = uVar18;
            if (local_b2 != '\0') {
              lVar21 = FUN_05172acc(*(undefined8 *)(param_2 + 0x60),(long)(int)uVar10);
              uVar18 = FUN_05172ad4(*(undefined8 *)(*(long *)(this + 0x58) + 8),
                                    (long)(short)local_b4);
              *(undefined8 *)(lVar21 + 8) = uVar18;
            }
            uVar25 = uVar25 + 1;
            std::pair<int_const,Sexy::PAObjectPos>::pair<int&,Sexy::PAObjectPos&,void>
                      (apStack_90,(int *)&local_b8,(PAObjectPos *)&local_b8);
            std::
            map<int,Sexy::PAObjectPos,std::less<int>,std::allocator<std::pair<int_const,Sexy::PAObjectPos>>>
            ::insert<std::pair<int_const,Sexy::PAObjectPos>,void>
                      ((map<int,Sexy::PAObjectPos,std::less<int>,std::allocator<std::pair<int_const,Sexy::PAObjectPos>>>
                        *)amStack_68,(pair *)apStack_90);
            std::vector<int,std::allocator<int>>::push_back
                      ((vector<int,std::allocator<int>> *)&local_d0,(int *)&local_b8);
          } while (uVar25 != uVar7);
        }
      }
      if ((uVar8 >> 2 & 1) != 0) {
        bVar4 = Buffer::ReadByte(param_1);
        uVar7 = (uint)bVar4;
        if (bVar4 == 0xff) {
          sVar5 = Buffer::ReadInt16(param_1);
          uVar7 = (uint)sVar5;
        }
        if (0 < (int)uVar7) {
          uVar25 = 0;
          do {
            uVar10 = Buffer::ReadInt16(param_1);
            local_f4 = uVar10 & 0x3ff;
            if (local_f4 == 0x3ff) {
              local_f4 = Buffer::ReadInt32(param_1);
            }
            local_f0 = std::
                       map<int,Sexy::PAObjectPos,std::less<int>,std::allocator<std::pair<int_const,Sexy::PAObjectPos>>>
                       ::find((map<int,Sexy::PAObjectPos,std::less<int>,std::allocator<std::pair<int_const,Sexy::PAObjectPos>>>
                               *)amStack_68,(int *)&local_f4);
            local_e0[0] = std::
                          map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                 *)amStack_68);
            cVar1 = std::__exception_ptr::operator==
                              ((exception_ptr *)&local_f0,(exception_ptr *)local_e0);
            if (cVar1 == '\0') {
              lVar21 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                                 ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_f0)
              ;
              PopTransformMatrix::LoadIdentity((PopTransformMatrix *)(lVar21 + 0x10));
              if (((uVar10 & 0xffff) >> 0xc & 1) == 0) {
                if (((uVar10 & 0xffff) >> 0xe & 1) != 0) {
                  sVar5 = Buffer::ReadInt16(param_1);
                  fVar23 = sinf((float)(int)sVar5 * 0.001);
                  fVar24 = cosf((float)(int)sVar5 * 0.001);
                  if (*(int *)(*(long *)(this + 0x58) + 100) == 2) {
                    fVar23 = -fVar23;
                  }
                  *(float *)(lVar21 + 0x10) = fVar24;
                  *(float *)(lVar21 + 0x1c) = fVar23;
                  *(float *)(lVar21 + 0x20) = fVar24;
                  *(float *)(lVar21 + 0x14) = -fVar23;
                }
              }
              else {
                iVar9 = Buffer::ReadInt32(param_1);
                *(float *)(lVar21 + 0x10) = (float)iVar9 * 1.5258789e-05;
                iVar9 = Buffer::ReadInt32(param_1);
                *(float *)(lVar21 + 0x14) = (float)iVar9 * 1.5258789e-05;
                iVar9 = Buffer::ReadInt32(param_1);
                *(float *)(lVar21 + 0x1c) = (float)iVar9 * 1.5258789e-05;
                iVar9 = Buffer::ReadInt32(param_1);
                *(float *)(lVar21 + 0x20) = (float)iVar9 * 1.5258789e-05;
              }
              PopTransformMatrix::LoadIdentity((PopTransformMatrix *)apStack_90);
              if (((uVar10 & 0xffff) >> 0xb & 1) == 0) {
                sVar5 = Buffer::ReadInt16(param_1);
                local_88 = (float)(int)sVar5 * 0.05;
                sVar5 = Buffer::ReadInt16(param_1);
                iVar9 = (int)sVar5;
              }
              else {
                iVar9 = Buffer::ReadInt32(param_1);
                local_88 = (float)iVar9 * 0.05;
                iVar9 = Buffer::ReadInt32(param_1);
              }
              local_7c = (float)iVar9 * 0.05;
              PopTransformMatrix::operator*
                        ((PopTransformMatrix *)apStack_90,(PopTransformMatrix *)(lVar21 + 0x10));
              *(undefined8 *)(lVar21 + 0x10) = local_120;
              *(undefined8 *)(lVar21 + 0x18) = uStack_118;
              *(undefined8 *)(lVar21 + 0x20) = local_110;
              if (((uVar10 & 0xffff) >> 0xd & 1) != 0) {
                uVar3 = Buffer::ReadByte(param_1);
                *(undefined1 *)(lVar21 + 0xc) = uVar3;
                uVar3 = Buffer::ReadByte(param_1);
                *(undefined1 *)(lVar21 + 0xd) = uVar3;
                uVar3 = Buffer::ReadByte(param_1);
                *(undefined1 *)(lVar21 + 0xe) = uVar3;
                uVar3 = Buffer::ReadByte(param_1);
                *(undefined1 *)(lVar21 + 0xf) = uVar3;
              }
              if (((uVar10 & 0xffff) >> 10 & 1) != 0) {
                Buffer::ReadInt16(param_1);
              }
              local_e8 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                         find((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                               *)amStack_38,(int *)&local_f4);
              local_e0[0] = std::
                            map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)amStack_38);
              bVar2 = eastl::operator!=((rbtree_iterator *)&local_e8,(rbtree_iterator *)local_e0);
              if (bVar2) {
                iVar9 = FUN_05172ae4(*(undefined8 *)(param_2 + 0x78),*(undefined8 *)(param_2 + 0x80)
                                    );
                std::vector<Sexy::PAObjectPos,std::allocator<Sexy::PAObjectPos>>::resize
                          (this_00,(long)(iVar9 + 1));
                puVar17 = (undefined8 *)FUN_05172b04(*(undefined8 *)(param_2 + 0x78),(long)iVar9);
                uVar18 = *(undefined8 *)(lVar21 + 0xc);
                *puVar17 = *(undefined8 *)(lVar21 + 4);
                puVar17[1] = uVar18;
                uVar18 = *(undefined8 *)(lVar21 + 0x1c);
                puVar17[2] = *(undefined8 *)(lVar21 + 0x14);
                puVar17[3] = uVar18;
                *(undefined4 *)(puVar17 + 4) = *(undefined4 *)(lVar21 + 0x24);
                piVar13 = (int *)std::
                                 map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                 ::operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                               *)amStack_38,(int *)&local_f4);
                *piVar13 = iVar9;
              }
            }
            uVar25 = uVar25 + 1;
          } while (uVar25 != uVar7);
        }
      }
      uVar18 = local_d0;
      uVar22 = 0;
      lVar21 = FUN_05172b10(local_d0,local_c8);
      if (lVar21 != 0) {
        do {
          piVar13 = (int *)FUN_05172b1c(uVar18,uVar22);
          local_e8 = std::
                     map<int,Sexy::PAObjectPos,std::less<int>,std::allocator<std::pair<int_const,Sexy::PAObjectPos>>>
                     ::find((map<int,Sexy::PAObjectPos,std::less<int>,std::allocator<std::pair<int_const,Sexy::PAObjectPos>>>
                             *)amStack_68,piVar13);
          local_e0[0] = std::
                        map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                               *)amStack_68);
          cVar1 = std::__exception_ptr::operator==
                            ((exception_ptr *)&local_e8,(exception_ptr *)local_e0);
          if (cVar1 == '\0') {
            lVar21 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                               ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_e8);
            iVar9 = FUN_05172ae4(*(undefined8 *)(param_2 + 0x78),*(undefined8 *)(param_2 + 0x80));
            local_f0 = CONCAT44(local_f0._4_4_,iVar9);
            std::vector<Sexy::PAObjectPos,std::allocator<Sexy::PAObjectPos>>::resize
                      (this_00,(long)(iVar9 + 1));
            puVar17 = (undefined8 *)
                      FUN_05172b04(*(undefined8 *)(param_2 + 0x78),(long)(int)local_f0);
            uVar18 = *(undefined8 *)(lVar21 + 0xc);
            *puVar17 = *(undefined8 *)(lVar21 + 4);
            puVar17[1] = uVar18;
            uVar18 = *(undefined8 *)(lVar21 + 0x1c);
            puVar17[2] = *(undefined8 *)(lVar21 + 0x14);
            puVar17[3] = uVar18;
            *(undefined4 *)(puVar17 + 4) = *(undefined4 *)(lVar21 + 0x24);
            std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>
                      ((pair<wchar_t_const,wchar_t> *)local_e0,(wchar_t *)(lVar21 + 4),
                       (wchar_t *)&local_f0);
            std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
            insert<std::pair<int_const,int>,void>
                      ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                       amStack_38,(pair *)local_e0);
          }
          uVar18 = local_d0;
          uVar22 = uVar22 + 1;
          uVar14 = FUN_05172b10(local_d0,local_c8);
        } while (uVar22 < uVar14);
      }
      if ((uVar8 >> 3 & 1) != 0) {
        Buffer::ReadString();
        StringToUpper((Sexy *)local_e0,extraout_x1);
        std::string::~string((string *)local_e0);
        std::pair<std::string_const,int>::pair<std::string&,int&,void>
                  ((pair<std::string_const,int> *)local_e0,(string *)&local_e8,&local_f8);
        std::
        map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
        ::insert<std::pair<std::string_const,int>,void>
                  ((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                    *)(param_2 + 0x30),(pair *)local_e0);
        std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                  ((pair<std::string_const,Sexy::PILifeValueTable> *)local_e0);
        std::string::~string((string *)&local_e8);
      }
      if ((uVar8 >> 4 & 1) != 0) {
        this_02[0x18] = (vector<int,std::allocator<int>>)0x1;
      }
      if ((uVar8 >> 5 & 1) != 0) {
        bVar4 = Buffer::ReadByte(param_1);
        std::vector<Sexy::PACommand,std::allocator<Sexy::PACommand>>::resize
                  ((vector<Sexy::PACommand,std::allocator<Sexy::PACommand>> *)(this_02 + 0x20),
                   (ulong)bVar4);
        if (bVar4 != 0) {
          lVar21 = 0;
          do {
            uVar18 = FUN_05172b24(*(undefined8 *)(this_02 + 0x20),lVar21);
            Buffer::ReadString();
            FUN_05474278(uVar18,(pair<wchar_t_const,wchar_t> *)local_e0);
            std::string::~string((string *)local_e0);
            lVar16 = lVar21 + 1;
            lVar21 = FUN_05172b24(*(undefined8 *)(this_02 + 0x20),lVar21);
            Buffer::ReadString();
            FUN_05474278(lVar21 + 8,(pair<wchar_t_const,wchar_t> *)local_e0);
            std::string::~string((string *)local_e0);
            lVar21 = lVar16;
          } while ((int)lVar16 < (int)(uint)bVar4);
        }
      }
      uVar22 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::size
                         ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                          amStack_38);
      std::vector<int,std::allocator<int>>::resize(this_02,uVar22);
      local_f0 = std::
                 map<int,Sexy::PAObjectPos,std::less<int>,std::allocator<std::pair<int_const,Sexy::PAObjectPos>>>
                 ::begin((map<int,Sexy::PAObjectPos,std::less<int>,std::allocator<std::pair<int_const,Sexy::PAObjectPos>>>
                          *)amStack_68);
      local_e8 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin
                           ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                            amStack_38);
      lVar21 = 0;
      while( true ) {
        local_e0[0] = std::
                      map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)amStack_68);
        bVar2 = eastl::operator!=((rbtree_iterator *)&local_f0,(rbtree_iterator *)local_e0);
        if (!bVar2) break;
        puVar15 = (undefined4 *)FUN_05172b1c(*(undefined8 *)this_02,lVar21);
        lVar16 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                           ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_e8);
        *puVar15 = *(undefined4 *)(lVar16 + 4);
        std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
                  ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_f0);
        std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
                  ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_e8);
        lVar21 = lVar21 + 1;
      }
      std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_d0);
      local_f8 = local_f8 + 1;
    } while (local_f8 < iVar12);
    std::vector<Sexy::PAObjectPos,std::allocator<Sexy::PAObjectPos>>::shrink_to_fit(this_00);
    std::vector<Sexy::PAObjectDef,std::allocator<Sexy::PAObjectDef>>::shrink_to_fit(this_01);
  }
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)amStack_38);
  std::
  map<int,Sexy::PAObjectPos,std::less<int>,std::allocator<std::pair<int_const,Sexy::PAObjectPos>>>::
  ~map((map<int,Sexy::PAObjectPos,std::less<int>,std::allocator<std::pair<int_const,Sexy::PAObjectPos>>>
        *)amStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PopAnim::Load_LoadPam(std::string const&) */

void __thiscall Sexy::PopAnim::Load_LoadPam(PopAnim *this,string *param_1)

{
  int iVar1;
  char cVar2;
  char cVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  PASpriteInst *this_00;
  PopAnimDef *this_01;
  string *psVar10;
  Image *pIVar11;
  DeviceImage *pDVar12;
  char *pcVar13;
  MemoryImage *pMVar14;
  undefined4 *puVar15;
  PASpriteDef *pPVar16;
  long lVar17;
  string *extraout_x1;
  string *extraout_x1_00;
  string *extraout_x1_01;
  string *extraout_x1_02;
  string *extraout_x1_03;
  string *extraout_x1_04;
  ResourceManager *this_02;
  long lVar18;
  float fVar19;
  float fVar20;
  string asStack_80 [8];
  string asStack_78 [8];
  string asStack_70 [8];
  string asStack_68 [8];
  string asStack_60 [8];
  string local_58 [8];
  Sexy aSStack_50 [8];
  string asStack_48 [16];
  Buffer aBStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = '\0';
  if (*(long *)(this + 0x58) != 0) goto LAB_0517b800;
  this_00 = ::operator_new(0x60);
  PASpriteInst::PASpriteInst(this_00);
  *(PASpriteInst **)(this + 0x50) = this_00;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  this_01 = ::operator_new(0x70);
  PopAnimDef::PopAnimDef(this_01);
  *(PopAnimDef **)(this + 0x58) = this_01;
  thunk_FUN_05475e00(this_01 + 0x58,param_1);
  Buffer::Buffer(aBStack_38);
  GetFileDir(param_1,false);
  cVar2 = SexyAppBase::ReadBufferFromFile(gSexyAppBase,(Buffer *)param_1,SUB81(aBStack_38,0));
  if (cVar2 == '\0') {
    FUN_031f5e7c(asStack_48,"Unable to load file: ",param_1);
    cVar2 = Fail((string *)this);
    std::string::~string(asStack_48);
  }
  else {
    iVar6 = Buffer::ReadInt32(aBStack_38);
    if (iVar6 == -0x450fe6ac) {
      lVar18 = *(long *)(this + 0x58);
      uVar7 = Buffer::ReadInt32(aBStack_38);
      lVar17 = *(long *)(this + 0x58);
      *(undefined4 *)(lVar18 + 100) = uVar7;
      if (*(uint *)(lVar17 + 100) < 7) {
        uVar8 = Buffer::ReadByte(aBStack_38);
        *(uint *)(this + 0x30) = uVar8 & 0xff;
        sVar4 = Buffer::ReadInt16(aBStack_38);
        *(int *)(this + 0x34) = (int)(sVar4 / 0x14);
        sVar4 = Buffer::ReadInt16(aBStack_38);
        *(int *)(this + 0x38) = (int)(sVar4 / 0x14);
        uVar8 = Buffer::ReadInt16(aBStack_38);
        *(uint *)(this + 0x3c) = (uVar8 & 0xffff) / 0x14;
        uVar8 = Buffer::ReadInt16(aBStack_38);
        *(uint *)(this + 0x40) = (uVar8 & 0xffff) / 0x14;
        sVar4 = Buffer::ReadInt16(aBStack_38);
        std::vector<Sexy::PAImage,std::allocator<Sexy::PAImage>>::resize
                  ((vector<Sexy::PAImage,std::allocator<Sexy::PAImage>> *)
                   (*(long *)(this + 0x58) + 0x38),(long)sVar4);
        if (0 < sVar4) {
          lVar17 = 0;
          do {
            psVar10 = (string *)FUN_05172b2c(*(undefined8 *)(*(long *)(this + 0x58) + 0x38),lVar17);
            *(undefined8 *)psVar10 = 0;
            *(undefined4 *)(psVar10 + 0x20) = 0;
            Buffer::ReadString();
            Set8BytesTo0(asStack_70);
            iVar6 = FUN_054743b0(asStack_78,0x28,0);
            iVar9 = FUN_054743b0(asStack_78,0x29,0);
            if ((iVar9 == -1 || iVar6 == -1) || (iVar9 <= iVar6)) {
              iVar6 = FUN_054743b0(asStack_78,0x24,0);
              if (iVar6 != -1) {
                FUN_05475ffc(aSStack_50,asStack_78,0,(long)iVar6);
                Lower(aSStack_50,extraout_x1);
                FUN_05474278(asStack_70,asStack_48);
                std::string::~string(asStack_48);
                std::string::~string((string *)aSStack_50);
                FUN_05475ffc(aSStack_50,asStack_78,(long)(iVar6 + 1),0xffffffffffffffff);
                Trim(aSStack_50,extraout_x1_00);
                FUN_05474278(asStack_78,asStack_48);
                std::string::~string(asStack_48);
                std::string::~string((string *)aSStack_50);
              }
            }
            else {
              FUN_05475ffc(aSStack_50,asStack_78,(long)(iVar6 + 1),(long)((iVar9 - iVar6) + -1));
              Lower(aSStack_50,extraout_x1_01);
              FUN_05474278(asStack_70,asStack_48);
              std::string::~string(asStack_48);
              std::string::~string((string *)aSStack_50);
              FUN_05475ffc(asStack_60,asStack_78,0,(long)iVar6);
              FUN_05475ffc(local_58,asStack_78,(long)(iVar9 + 1),0xffffffffffffffff);
              std::operator+(asStack_60,local_58);
              Trim(aSStack_50,extraout_x1_02);
              FUN_05474278(asStack_78,asStack_48);
              std::string::~string(asStack_48);
              std::string::~string((string *)aSStack_50);
              std::string::~string(local_58);
              std::string::~string(asStack_60);
            }
            *(undefined4 *)(psVar10 + 0x10) = 1;
            *(undefined4 *)(psVar10 + 0x14) = 1;
            iVar6 = FUN_054743b0(asStack_78,0x5b,0);
            iVar9 = FUN_054743b0(asStack_78,0x5d,0);
            if ((iVar9 != -1 && iVar6 != -1) && (iVar6 < iVar9)) {
              FUN_05475ffc(asStack_48,asStack_78,(long)(iVar6 + 1),(long)((iVar9 - iVar6) + -1));
              Lower((Sexy *)asStack_48,extraout_x1_03);
              std::string::~string(asStack_48);
              FUN_05475ffc(asStack_60,asStack_78,0,(long)iVar6);
              FUN_05475ffc(local_58,asStack_78,(long)(iVar9 + 1),0xffffffffffffffff);
              std::operator+(asStack_60,local_58);
              Trim(aSStack_50,extraout_x1_04);
              FUN_05474278(asStack_78,asStack_48);
              std::string::~string(asStack_48);
              std::string::~string((string *)aSStack_50);
              std::string::~string(local_58);
              std::string::~string(asStack_60);
              iVar6 = FUN_054743b0(asStack_68,0x2c,0);
              if (iVar6 != -1) {
                FUN_05475ffc(asStack_48,asStack_68,0,(long)iVar6);
                pcVar13 = (char *)FUN_0547429c(asStack_48);
                iVar9 = atoi(pcVar13);
                *(int *)(psVar10 + 0x10) = iVar9;
                std::string::~string(asStack_48);
                FUN_05475ffc(asStack_48,asStack_68,(long)(iVar6 + 1),0xffffffffffffffff);
                pcVar13 = (char *)FUN_0547429c(asStack_48);
                iVar6 = atoi(pcVar13);
                *(int *)(psVar10 + 0x14) = iVar6;
                std::string::~string(asStack_48);
              }
              std::string::~string(asStack_68);
            }
            lVar18 = FUN_05474374(asStack_70,&DAT_05660378,0);
            if (lVar18 != -1) {
              *(undefined4 *)(psVar10 + 0x20) = 1;
            }
            iVar6 = *(int *)(*(long *)(this + 0x58) + 100);
            if (iVar6 < 4) {
              *(undefined4 *)(psVar10 + 8) = 0xffffffff;
              *(undefined4 *)(psVar10 + 0xc) = 0xffffffff;
            }
            else {
              sVar5 = Buffer::ReadInt16(aBStack_38);
              *(int *)(psVar10 + 8) = (int)sVar5;
              sVar5 = Buffer::ReadInt16(aBStack_38);
              lVar18 = *(long *)(this + 0x58);
              *(int *)(psVar10 + 0xc) = (int)sVar5;
              iVar6 = *(int *)(lVar18 + 100);
            }
            if (iVar6 == 1) {
              sVar5 = Buffer::ReadInt16(aBStack_38);
              fVar19 = sinf((float)(int)sVar5 * 0.001);
              fVar20 = cosf((float)(int)sVar5 * 0.001);
              *(float *)(psVar10 + 0x24) = fVar20;
              *(float *)(psVar10 + 0x30) = fVar19;
              *(float *)(psVar10 + 0x34) = fVar20;
              *(float *)(psVar10 + 0x28) = -fVar19;
            }
            else {
              iVar6 = Buffer::ReadInt32(aBStack_38);
              *(float *)(psVar10 + 0x24) = ((float)iVar6 * 7.6293946e-07) / *(float *)(this + 0x2c);
              iVar6 = Buffer::ReadInt32(aBStack_38);
              *(float *)(psVar10 + 0x28) = ((float)iVar6 * 7.6293946e-07) / *(float *)(this + 0x2c);
              iVar6 = Buffer::ReadInt32(aBStack_38);
              *(float *)(psVar10 + 0x30) = ((float)iVar6 * 7.6293946e-07) / *(float *)(this + 0x2c);
              iVar6 = Buffer::ReadInt32(aBStack_38);
              *(float *)(psVar10 + 0x34) = ((float)iVar6 * 7.6293946e-07) / *(float *)(this + 0x2c);
            }
            sVar5 = Buffer::ReadInt16(aBStack_38);
            iVar6 = 0;
            *(float *)(psVar10 + 0x2c) = (float)(int)sVar5 * 0.05;
            sVar5 = Buffer::ReadInt16(aBStack_38);
            *(float *)(psVar10 + 0x38) = (float)(int)sVar5 * 0.05;
            thunk_FUN_05475e00(psVar10 + 0x18,asStack_78);
            lVar18 = FUN_05474184(psVar10 + 0x18);
            if (lVar18 == 0) {
              local_58[0] = (string)0x0;
              RtMixedPtr<Sexy::Image>::RtMixedPtr();
              this_02 = *(ResourceManager **)(gSexyAppBase + 0x848);
              std::string::string((string *)aSStack_50,"!whitepixel");
              ResourceManager::GetImage
                        (this_02,(RtMixedPtr *)asStack_48,(string *)aSStack_50,
                         (GetImageOptions *)0x0,(bool *)local_58);
              std::string::~string((string *)aSStack_50);
              nop();
              if (local_58[0] != (string)0x0) {
                pIVar11 = RtMixedPtr::operator_cast_to_Image_((RtMixedPtr *)asStack_48);
                pMVar14 = RtObject::Cast<Sexy::MemoryImage>((RtObject *)pIVar11);
                (**(code **)(*(long *)pMVar14 + 200))(pMVar14,1,1);
                (**(code **)(*(long *)pMVar14 + 0x130))(pMVar14,0,0);
                puVar15 = (undefined4 *)(**(code **)(*(long *)pMVar14 + 0xd0))(pMVar14,0,0,0,0);
                lVar18 = *(long *)pMVar14;
                *puVar15 = 0xffffffff;
                (**(code **)(lVar18 + 0x98))(pMVar14);
              }
              pIVar11 = RtMixedPtr::operator_cast_to_Image_((RtMixedPtr *)asStack_48);
              pDVar12 = RtObject::Cast<Sexy::DeviceImage>((RtObject *)pIVar11);
              *(DeviceImage **)psVar10 = pDVar12;
              RtMixedPtr<Sexy::Image>::~RtMixedPtr((RtMixedPtr<Sexy::Image> *)asStack_48);
            }
            else {
              iVar9 = FUN_05474184(asStack_78);
              if (0 < iVar9) {
                do {
                  lVar18 = (long)iVar6;
                  Set8BytesTo0(aSStack_50);
                  iVar9 = FUN_054743b0(asStack_78,0x2c,lVar18);
                  if (iVar9 == -1) {
                    FUN_05475ffc(asStack_48,asStack_78,lVar18,0xffffffffffffffff);
                    FUN_05474278(aSStack_50,asStack_48);
                    std::string::~string(asStack_48);
                    Load_GetImage((PAImage *)this,psVar10,asStack_80);
                    std::string::~string((string *)aSStack_50);
                    break;
                  }
                  iVar1 = iVar9 - iVar6;
                  iVar6 = iVar9 + 1;
                  FUN_05475ffc(asStack_48,asStack_78,lVar18,(long)iVar1);
                  FUN_05474278(aSStack_50,asStack_48);
                  std::string::~string(asStack_48);
                  Load_GetImage((PAImage *)this,psVar10,asStack_80);
                  std::string::~string((string *)aSStack_50);
                  iVar9 = FUN_05474184(asStack_78);
                } while (iVar6 < iVar9);
              }
            }
            lVar18 = FUN_05474184(*(long *)(this + 0x58) + 0x50);
            if (lVar18 != 0) {
              cVar2 = '\0';
              std::string::~string(asStack_70);
              std::string::~string(asStack_78);
              goto LAB_0517b904;
            }
            lVar17 = lVar17 + 1;
            std::string::~string(asStack_70);
            std::string::~string(asStack_78);
          } while ((int)lVar17 < (int)sVar4);
        }
        lVar17 = 0;
        sVar4 = Buffer::ReadInt16(aBStack_38);
        std::vector<Sexy::PASpriteDef,std::allocator<Sexy::PASpriteDef>>::resize
                  ((vector<Sexy::PASpriteDef,std::allocator<Sexy::PASpriteDef>> *)
                   (*(long *)(this + 0x58) + 8),(long)sVar4);
        if (0 < sVar4) {
          do {
            pPVar16 = (PASpriteDef *)
                      FUN_05172ad4(*(undefined8 *)(*(long *)(this + 0x58) + 8),lVar17);
            cVar3 = LoadSpriteDef(this,aBStack_38,pPVar16);
            if (cVar3 == '\0') goto LAB_0517be50;
            lVar17 = lVar17 + 1;
          } while ((int)lVar17 < (int)sVar4);
        }
        if ((*(int *)(*(long *)(this + 0x58) + 100) < 4) ||
           (cVar3 = Buffer::ReadBoolean(aBStack_38), cVar3 != '\0')) {
          pPVar16 = ::operator_new(0x98);
          PASpriteDef::PASpriteDef(pPVar16);
          **(undefined8 **)(this + 0x58) = pPVar16;
          cVar3 = LoadSpriteDef(this,aBStack_38,pPVar16);
          if (cVar3 == '\0') {
LAB_0517be50:
            cVar2 = '\0';
            goto LAB_0517b904;
          }
        }
        *(undefined1 *)(*(long *)(this + 0x58) + 0x68) = 1;
        goto LAB_0517b904;
      }
      pcVar13 = "Invalid version";
    }
    else {
      pcVar13 = "Invalid header";
    }
    std::string::string(asStack_48,pcVar13);
    cVar2 = Fail((string *)this);
    std::string::~string(asStack_48);
    nop();
  }
LAB_0517b904:
  std::string::~string(asStack_80);
  Buffer::~Buffer(aBStack_38);
LAB_0517b800:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::PopAnim::LoadFile(std::string const&) */

void __thiscall Sexy::PopAnim::LoadFile(PopAnim *this,string *param_1)

{
  int iVar1;
  undefined4 uVar2;
  string *extraout_x1;
  string asStack_20 [8];
  Sexy aSStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Load_Init(this);
  Set8BytesTo0(asStack_20);
  iVar1 = FUN_054744e0(param_1,0x2e,0xffffffffffffffff);
  if (iVar1 != -1) {
    FUN_05475ffc(aSStack_18,param_1,(long)iVar1,0xffffffffffffffff);
    Lower(aSStack_18,extraout_x1);
    FUN_05474278(asStack_20,asStack_10);
    std::string::~string(asStack_10);
    std::string::~string((string *)aSStack_18);
  }
  uVar2 = Load_LoadPam(this,param_1);
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

