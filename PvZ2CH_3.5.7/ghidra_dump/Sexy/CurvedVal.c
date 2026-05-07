// Class: Sexy::CurvedVal


/* Sexy::CurvedVal::operator double() */

double __thiscall Sexy::CurvedVal::operator_cast_to_double(CurvedVal *this)

{
  double dVar1;
  
  dVar1 = (double)GetInVal(this);
  dVar1 = (double)GetOutVal(this,dVar1);
  *(double *)(this + 0x50) = dVar1;
  return dVar1;
}


/* Sexy::CurvedVal::~CurvedVal() */

void __thiscall Sexy::CurvedVal::~CurvedVal(CurvedVal *this)

{
  std::string::~string((string *)(this + 0x28));
  return;
}


/* Sexy::CurvedVal::SetMode(int) */

void __thiscall Sexy::CurvedVal::SetMode(CurvedVal *this,int param_1)

{
  this[0x70] = SUB41(param_1,0);
  return;
}


/* Sexy::CurvedVal::InitVarDefaults() */

void __thiscall Sexy::CurvedVal::InitVarDefaults(CurvedVal *this)

{
  long lVar1;
  long lVar2;
  
  this[0x70] = (CurvedVal)0x0;
  *(undefined8 *)(this + 0x48) = 0;
  this[0x71] = (CurvedVal)0x0;
  this[0x73] = (CurvedVal)0x0;
  this[0x72] = (CurvedVal)0x0;
  this[0x74] = (CurvedVal)0x0;
  this[0x75] = (CurvedVal)0x0;
  this[0x76] = (CurvedVal)0x0;
  this[0x77] = (CurvedVal)0x0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  lVar2 = gSexyAppBase;
  *(undefined8 *)(this + 0x20) = 0;
  lVar1 = lVar2 + 0x608;
  if (lVar2 == 0) {
    lVar1 = 0;
  }
  *(long *)(this + 0x38) = lVar1;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0x3ff0000000000000;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0x3ff0000000000000;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x58) = 0;
  return;
}


/* Sexy::CurvedVal::CurvedVal() */

void __thiscall Sexy::CurvedVal::CurvedVal(CurvedVal *this)

{
  Set8BytesTo0(this + 0x28);
  InitVarDefaults(this);
  return;
}


/* Sexy::CurvedVal::SetConstant(double) */

void __thiscall Sexy::CurvedVal::SetConstant(CurvedVal *this,double param_1)

{
  this[0x75] = (CurvedVal)0x0;
  *(undefined8 *)(this + 0x40) = 0;
  this[0x71] = (CurvedVal)0x1;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(double *)(this + 0x10) = param_1;
  *(double *)(this + 8) = param_1;
  return;
}


/* Sexy::CurvedVal::IsInitialized() */

bool __thiscall Sexy::CurvedVal::IsInitialized(CurvedVal *this)

{
  return this[0x71] != (CurvedVal)0x0;
}


/* Sexy::CurvedVal::SetRamp(int) */

void __thiscall Sexy::CurvedVal::SetRamp(CurvedVal *this,int param_1)

{
  this[0x71] = SUB41(param_1,0);
  return;
}


/* Sexy::CurvedVal::SetOutRange(double, double) */

void __thiscall Sexy::CurvedVal::SetOutRange(CurvedVal *this,double param_1,double param_2)

{
  *(double *)(this + 8) = param_1;
  *(double *)(this + 0x10) = param_2;
  return;
}


/* Sexy::CurvedVal::SetInRange(double, double) */

void __thiscall Sexy::CurvedVal::SetInRange(CurvedVal *this,double param_1,double param_2)

{
  *(double *)(this + 0x60) = param_1;
  *(double *)(this + 0x68) = param_2;
  return;
}


/* Sexy::CurvedVal::GetInValAtUpdate(int) */

undefined1  [16] __thiscall Sexy::CurvedVal::GetInValAtUpdate(CurvedVal *this,int param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = *(double *)(this + 0x60) + *(double *)this * (double)param_1;
  auVar1._8_8_ = 0;
  return auVar1;
}


/* Sexy::CurvedVal::GetLengthInUpdates() */

int __thiscall Sexy::CurvedVal::GetLengthInUpdates(CurvedVal *this)

{
  if (*(double *)this != 0.0) {
    return (int)((*(double *)(this + 0x68) - *(double *)(this + 0x60)) / *(double *)this);
  }
  return -1;
}


/* Sexy::CurvedVal::ClearTrigger() */

void __thiscall Sexy::CurvedVal::ClearTrigger(CurvedVal *this)

{
  this[0x75] = (CurvedVal)0x0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::CurvedVal::GenerateTable(std::vector<Sexy::CurvedVal::DataPoint,
   std::allocator<Sexy::CurvedVal::DataPoint> >*, float*, int) */

void __thiscall
Sexy::CurvedVal::GenerateTable(CurvedVal *this,vector *param_1,float *param_2,int param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  long lVar9;
  int iVar10;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float unaff_s10;
  float fVar18;
  float local_8c;
  float local_88;
  float local_84;
  BSpline aBStack_80 [120];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BSpline::BSpline(aBStack_80);
  lVar9 = 0;
  while( true ) {
    uVar11 = *(undefined8 *)param_1;
    iVar5 = FUN_05127ff8(uVar11,*(undefined8 *)(param_1 + 8));
    if (iVar5 <= (int)lVar9) break;
    pfVar7 = (float *)FUN_0512800c(uVar11,lVar9);
    BSpline::AddPoint(aBStack_80,*pfVar7,pfVar7[1]);
    lVar9 = lVar9 + 1;
  }
  bVar4 = true;
  BSpline::CalculateSpline(aBStack_80,false);
  uVar11 = *(undefined8 *)param_1;
  iVar5 = 0;
  iVar6 = FUN_05127ff8(uVar11,*(undefined8 *)(param_1 + 8));
  fVar18 = (float)(param_3 + -1);
  lVar9 = 0;
  if (1 < iVar6) {
    do {
      lVar2 = lVar9 + 1;
      pfVar7 = (float *)FUN_0512800c(uVar11,lVar9);
      pfVar8 = (float *)FUN_0512800c(uVar11,lVar2);
      iVar12 = (int)(fVar18 * *pfVar7 + 0.5);
      iVar10 = (int)(fVar18 * *pfVar8 + 0.5);
      if (iVar12 <= iVar10) {
        iVar6 = 0;
        do {
          fVar17 = (float)(int)lVar9 + (1.0 / (float)(iVar10 - iVar12)) * (float)iVar6;
          fVar15 = (float)BSpline::GetYPoint(aBStack_80,fVar17);
          fVar17 = (float)BSpline::GetXPoint(aBStack_80,fVar17);
          iVar13 = (int)(fVar17 * fVar18 + 0.5);
          fVar17 = unaff_s10;
          if ((iVar13 <= iVar10) && (iVar5 <= iVar13)) {
            fVar17 = fVar15;
            if (bVar4) {
              bVar4 = false;
              iVar5 = iVar13;
            }
            else if (iVar5 + 1 < iVar13) {
              uVar3 = iVar13 - iVar5;
              if (this[0x72] == (CurvedVal)0x0) {
                lVar14 = 0;
                lVar1 = (long)iVar5;
                do {
                  local_88 = 0.0;
                  fVar16 = (float)(int)lVar14 * (1.0 / (float)(int)uVar3);
                  local_8c = (1.0 - fVar16) * unaff_s10 + fVar15 * fVar16;
                  pfVar7 = eastl::max_alt<float>(&local_8c,&local_88);
                  local_84 = 1.0;
                  pfVar7 = eastl::min_alt<float>(pfVar7,&local_84);
                  param_2[lVar1 + lVar14] = *pfVar7;
                  lVar14 = lVar14 + 1;
                  iVar5 = iVar13;
                } while (lVar14 != (ulong)uVar3 + 1);
              }
              else {
                lVar14 = 0;
                lVar1 = (long)iVar5;
                do {
                  fVar16 = (float)(int)lVar14 * (1.0 / (float)(int)uVar3);
                  param_2[lVar1 + lVar14] = (1.0 - fVar16) * unaff_s10 + fVar15 * fVar16;
                  lVar14 = lVar14 + 1;
                  iVar5 = iVar13;
                } while (lVar14 != (ulong)uVar3 + 1);
              }
            }
            else {
              local_8c = fVar15;
              if (this[0x72] == (CurvedVal)0x0) {
                local_88 = 0.0;
                pfVar7 = eastl::max_alt<float>(&local_8c,&local_88);
                local_84 = 1.0;
                pfVar7 = eastl::min_alt<float>(pfVar7,&local_84);
                fVar15 = *pfVar7;
              }
              param_2[iVar13] = fVar15;
              iVar5 = iVar13;
            }
          }
          unaff_s10 = fVar17;
          iVar6 = iVar6 + 1;
        } while (iVar12 + iVar6 <= iVar10);
        uVar11 = *(undefined8 *)param_1;
        iVar6 = FUN_05127ff8(uVar11,*(undefined8 *)(param_1 + 8));
      }
      lVar9 = lVar2;
    } while ((int)lVar2 + 1 < iVar6);
  }
  if (0 < iVar6) {
    lVar9 = 0;
    do {
      lVar2 = lVar9 + 1;
      pfVar7 = (float *)FUN_0512800c(uVar11,lVar9);
      param_2[(int)((float)(param_3 + -1) * *pfVar7 + 0.5)] = pfVar7[1];
      lVar9 = lVar2;
    } while ((int)lVar2 < iVar6);
  }
  BSpline::~BSpline(aBStack_80);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::CurvedVal::ParseDataString(std::string const&) */

void __thiscall Sexy::CurvedVal::ParseDataString(CurvedVal *this,string *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined1 *puVar6;
  ulong uVar7;
  float *pfVar8;
  long lVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_8dc;
  double local_8d8;
  string asStack_8d0 [8];
  undefined8 local_8c8;
  undefined4 local_8c0 [2];
  float local_8b8;
  undefined4 local_8b4;
  undefined4 local_8b0;
  undefined8 local_8a8;
  undefined8 local_8a0;
  CurveCacheRecord aCStack_890 [1088];
  pair<std::string_const,Sexy::CurvedVal::CurveCacheRecord> apStack_450 [1096];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  thunk_FUN_05475e00(this + 0x28);
  this[0x73] = (CurvedVal)0x0;
  this[0x72] = (CurvedVal)0x0;
  this[0x74] = (CurvedVal)0x0;
  this[0x76] = (CurvedVal)0x0;
  *(undefined8 *)this = 0;
  this[0x77] = (CurvedVal)0x0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0x3ff0000000000000;
  pcVar5 = (char *)FUN_054741b0(param_1,0);
  if (((byte)(*pcVar5 + 0x9fU) < 2) && (*pcVar5 == 'b')) {
    bVar1 = true;
    uVar11 = 2;
    puVar6 = (undefined1 *)FUN_054741b0(param_1,1);
    iVar4 = 2;
    uVar7 = FUN_05127de0(*puVar6);
    this[0x73] = (CurvedVal)((byte)(uVar7 >> 1) & 1);
    this[0x74] = (CurvedVal)((byte)(uVar7 >> 2) & 1);
    this[0x76] = (CurvedVal)((byte)(uVar7 >> 3) & 1);
    this[0x77] = (CurvedVal)((byte)(uVar7 >> 4) & 1);
    this[0x72] = (CurvedVal)((byte)uVar7 & 1);
    iVar3 = FUN_054743b0(param_1,0x2c,2);
  }
  else {
    uVar11 = 1;
    bVar1 = false;
    iVar4 = 1;
    iVar3 = FUN_054743b0(param_1,0x2c,1);
  }
  if (iVar3 == -1) {
    this[0x76] = (CurvedVal)0x1;
  }
  else {
    iVar10 = iVar3 + 1;
    local_8d8 = 0.0;
    FUN_05475ffc((string *)&local_8a8,param_1,uVar11,(long)(iVar3 - iVar4));
    StringToDouble((string *)&local_8a8,&local_8d8);
    std::string::~string((string *)&local_8a8);
    *(double *)(this + 8) = (double)(float)local_8d8;
    iVar4 = FUN_054743b0(param_1,0x2c,(long)iVar10);
    if (iVar4 != -1) {
      iVar3 = iVar4 + 1;
      local_8d8 = 0.0;
      FUN_05475ffc((string *)&local_8a8,param_1,(long)iVar10,(long)(iVar4 - iVar10));
      StringToDouble((string *)&local_8a8,&local_8d8);
      std::string::~string((string *)&local_8a8);
      *(double *)(this + 0x10) = (double)(float)local_8d8;
      iVar4 = FUN_054743b0(param_1,0x2c,(long)iVar3);
      if (iVar4 != -1) {
        iVar10 = iVar4 + 1;
        local_8d8 = 0.0;
        FUN_05475ffc((string *)&local_8a8,param_1,(long)iVar3,(long)(iVar4 - iVar3));
        StringToDouble((string *)&local_8a8,&local_8d8);
        std::string::~string((string *)&local_8a8);
        *(double *)this = (double)(float)local_8d8;
        if (bVar1) {
          lVar12 = (long)iVar10;
          iVar4 = FUN_054743b0(param_1,0x2c,lVar12);
          if (iVar4 == -1) goto LAB_05129fa0;
          iVar3 = iVar4 - iVar10;
          iVar10 = iVar4 + 1;
          local_8d8 = 0.0;
          FUN_05475ffc((string *)&local_8a8,param_1,lVar12,(long)iVar3);
          StringToDouble((string *)&local_8a8,&local_8d8);
          std::string::~string((string *)&local_8a8);
          *(double *)(this + 0x68) = (double)(float)local_8d8;
        }
        FUN_05475ffc(asStack_8d0,param_1,(long)iVar10,0xffffffffffffffff);
        local_8c8 = std::
                    map<std::string,Sexy::CurvedVal::CurveCacheRecord,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::CurvedVal::CurveCacheRecord>>>
                    ::find((map<std::string,Sexy::CurvedVal::CurveCacheRecord,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::CurvedVal::CurveCacheRecord>>>
                            *)mCurveCacheMap,asStack_8d0);
        local_8a8 = std::
                    map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)mCurveCacheMap);
        cVar2 = std::__exception_ptr::operator==
                          ((exception_ptr *)&local_8c8,(exception_ptr *)&local_8a8);
        if (cVar2 == '\0') {
          lVar12 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                             ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_8c8);
          *(long *)(this + 0x48) = lVar12 + 8;
        }
        else {
          memset(aCStack_890,0,0x440);
          fVar15 = 0.0;
          CurveCacheRecord::CurveCacheRecord(aCStack_890);
          std::pair<std::string_const,Sexy::CurvedVal::CurveCacheRecord>::
          pair<std::string&,Sexy::CurvedVal::CurveCacheRecord,void>
                    (apStack_450,asStack_8d0,aCStack_890);
          local_8c8 = std::
                      map<std::string,Sexy::CurvedVal::CurveCacheRecord,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::CurvedVal::CurveCacheRecord>>>
                      ::insert<std::pair<std::string_const,Sexy::CurvedVal::CurveCacheRecord>,void>
                                ((map<std::string,Sexy::CurvedVal::CurveCacheRecord,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::CurvedVal::CurveCacheRecord>>>
                                  *)mCurveCacheMap,(pair *)apStack_450);
          std::pair<std::string_const,Sexy::CurvedVal::CurveCacheRecord>::~pair(apStack_450);
          CurveCacheRecord::~CurveCacheRecord(aCStack_890);
          lVar12 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                             ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_8c8);
          *(long *)(this + 0x48) = lVar12 + 8;
          std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                    ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_8a8);
          fVar14 = _FUN_0512a24c;
LAB_0512a0ac:
          iVar4 = FUN_05474184(param_1);
          if (iVar10 < iVar4) {
            iVar4 = iVar10 + 1;
            puVar6 = (undefined1 *)FUN_054741b0(param_1,(long)iVar10);
            local_8b8 = fVar15;
            local_8b4 = FUN_05127db4(*puVar6);
            if (this[0x76] == (CurvedVal)0x0) {
              local_8b0 = 0;
              iVar10 = iVar4;
            }
            else {
              iVar10 = iVar10 + 4;
              FUN_05475ffc((string *)local_8c0,param_1,(long)iVar4,3);
              local_8b0 = FUN_05127dfc((string *)local_8c0);
              std::string::~string((string *)local_8c0);
            }
            std::vector<Sexy::CurvedVal::DataPoint,std::allocator<Sexy::CurvedVal::DataPoint>>::
            push_back((vector<Sexy::CurvedVal::DataPoint,std::allocator<Sexy::CurvedVal::DataPoint>>
                       *)&local_8a8,(DataPoint *)&local_8b8);
            iVar4 = FUN_05474184(param_1);
            lVar12 = (long)iVar10;
            while (iVar10 < iVar4) {
              iVar10 = iVar10 + 1;
              pcVar5 = (char *)FUN_054741b0(param_1,lVar12);
              if (*pcVar5 != ' ') {
                fVar13 = (float)FUN_05127db4();
                local_8dc = fVar15 + fVar14 * fVar13;
                local_8c0[0] = 0x3f800000;
                pfVar8 = eastl::min_alt<float>(&local_8dc,(float *)local_8c0);
                fVar15 = *pfVar8;
                break;
              }
              fVar15 = fVar15 + fVar14;
              lVar12 = lVar12 + 1;
            }
            goto LAB_0512a0ac;
          }
          GenerateTable(this,(vector *)&local_8a8,*(float **)(this + 0x48),0x100);
          thunk_FUN_05475e00(*(long *)(this + 0x48) + 0x438,param_1);
          std::vector<Sexy::SexyMathHermite::SPoint,std::allocator<Sexy::SexyMathHermite::SPoint>>::
          clear((vector<Sexy::SexyMathHermite::SPoint,std::allocator<Sexy::SexyMathHermite::SPoint>>
                 *)(*(long *)(this + 0x48) + 0x400));
          for (lVar12 = 0; uVar11 = local_8a8, iVar4 = FUN_05127ff8(local_8a8,local_8a0),
              (int)lVar12 < iVar4; lVar12 = lVar12 + 1) {
            pfVar8 = (float *)FUN_0512800c(uVar11,lVar12);
            fVar14 = (float)SexyMath::DegToRad(pfVar8[2]);
            fVar14 = tanf(fVar14);
            lVar9 = *(long *)(this + 0x48);
            EATextSquish::Vec3::Vec3((Vec3 *)&local_8b8,*pfVar8,pfVar8[1],fVar14);
            std::vector<Sexy::SexyMathHermite::SPoint,std::allocator<Sexy::SexyMathHermite::SPoint>>
            ::push_back((vector<Sexy::SexyMathHermite::SPoint,std::allocator<Sexy::SexyMathHermite::SPoint>>
                         *)(lVar9 + 0x400),(SPoint *)&local_8b8);
          }
          FUN_05127e80(*(long *)(this + 0x48) + 0x430);
          std::vector<Sexy::CurvedVal::DataPoint,std::allocator<Sexy::CurvedVal::DataPoint>>::
          ~vector((vector<Sexy::CurvedVal::DataPoint,std::allocator<Sexy::CurvedVal::DataPoint>> *)
                  &local_8a8);
        }
        std::string::~string(asStack_8d0);
      }
    }
  }
LAB_05129fa0:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* Sexy::CurvedVal::SetCurve(std::string const&, Sexy::CurvedVal*) */

void __thiscall Sexy::CurvedVal::SetCurve(CurvedVal *this,string *param_1,CurvedVal *param_2)

{
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  if (*(undefined4 **)(this + 0x38) != (undefined4 *)0x0) {
    *(undefined4 *)(this + 0x30) = **(undefined4 **)(this + 0x38);
  }
  *(CurvedVal **)(this + 0x40) = param_2;
  this[0x75] = (CurvedVal)0x0;
  this[0x71] = (CurvedVal)0x6;
  ParseDataString(this,param_1);
  *(undefined8 *)(this + 0x80) = *(undefined8 *)(this + 0x60);
  return;
}


/* Sexy::CurvedVal::CurvedVal(std::string const&, Sexy::CurvedVal*) */

void __thiscall Sexy::CurvedVal::CurvedVal(CurvedVal *this,string *param_1,CurvedVal *param_2)

{
  Set8BytesTo0(this + 0x28);
  InitVarDefaults(this);
  SetCurve(this,param_1,param_2);
  return;
}


/* Sexy::CurvedVal::SetCurveStr(std::string const&) */

void __thiscall Sexy::CurvedVal::SetCurveStr(CurvedVal *this,string *param_1)

{
  SetCurve(this,param_1,(CurvedVal *)0x0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::CurvedVal::SetCurve(char const**, Sexy::CurvedVal*) */

void __thiscall Sexy::CurvedVal::SetCurve(CurvedVal *this,char **param_1,CurvedVal *param_2)

{
  char *__s;
  string asStack_10 [8];
  long local_8;
  
  *(char ***)(this + 0x18) = param_1;
  local_8 = ___stack_chk_guard;
  __s = *param_1;
  *(char **)(this + 0x20) = __s;
  if (*(undefined4 **)(this + 0x38) != (undefined4 *)0x0) {
    *(undefined4 *)(this + 0x30) = **(undefined4 **)(this + 0x38);
  }
  *(CurvedVal **)(this + 0x40) = param_2;
  this[0x75] = (CurvedVal)0x0;
  this[0x71] = (CurvedVal)0x6;
  std::string::string(asStack_10,__s);
  ParseDataString(this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  *(undefined8 *)(this + 0x80) = *(undefined8 *)(this + 0x60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::CurvedVal::CurvedVal(char const**, Sexy::CurvedVal*) */

void __thiscall Sexy::CurvedVal::CurvedVal(CurvedVal *this,char **param_1,CurvedVal *param_2)

{
  Set8BytesTo0(this + 0x28);
  InitVarDefaults(this);
  SetCurve(this,param_1,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::CurvedVal::CheckCurveChange() */

void __thiscall Sexy::CurvedVal::CheckCurveChange(CurvedVal *this)

{
  undefined8 uVar1;
  char *__s;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(undefined8 **)(this + 0x18) == (undefined8 *)0x0) ||
     (__s = (char *)**(undefined8 **)(this + 0x18), __s == *(char **)(this + 0x20))) {
    uVar1 = 0;
  }
  else {
    *(char **)(this + 0x20) = __s;
    std::string::string(asStack_10,__s);
    ParseDataString(this,asStack_10);
    std::string::~string(asStack_10);
    nop();
    uVar1 = 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* Sexy::CurvedVal::CheckClamping() */

undefined1 __thiscall Sexy::CurvedVal::CheckClamping(CurvedVal *this)

{
  undefined1 uVar1;
  double dVar2;
  double __y;
  double dVar3;
  
  CheckCurveChange(this);
  if (this[0x70] == (CurvedVal)0x0) {
    dVar2 = *(double *)(this + 0x60);
    if ((dVar2 <= *(double *)(this + 0x80)) &&
       (dVar2 = *(double *)(this + 0x68), *(double *)(this + 0x80) <= dVar2)) {
      return 1;
    }
    *(double *)(this + 0x80) = dVar2;
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
    if ((byte)((char)this[0x70] - 1U) < 2) {
      dVar2 = *(double *)(this + 0x80);
      dVar3 = *(double *)(this + 0x60);
      __y = *(double *)(this + 0x68) - dVar3;
      if (dVar2 <= *(double *)(this + 0x68) && dVar3 <= dVar2) {
        return 1;
      }
      dVar2 = fmod((__y - dVar3) + dVar2,__y);
      *(double *)(this + 0x80) = dVar2 + dVar3;
      return 1;
    }
  }
  return uVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::CurvedVal::GetOutVal(double) */

void __thiscall Sexy::CurvedVal::GetOutVal(CurvedVal *this,double param_1)

{
  uint uVar1;
  float *pfVar2;
  ulong uVar3;
  double *pdVar4;
  long lVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float local_14;
  double local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  switch(this[0x71]) {
  case (CurvedVal)0x0:
  case (CurvedVal)0x1:
    if (this[0x70] == (CurvedVal)0x2) {
      dVar8 = *(double *)(this + 0x60);
      dVar7 = *(double *)(this + 0x68) - dVar8;
      dVar9 = param_1 - dVar8;
      if (dVar7 * 0.5 < dVar9) {
        dVar7 = *(double *)(this + 0x10) - *(double *)(this + 8);
        dVar7 = *(double *)(this + 8) +
                (dVar9 / (dVar8 - *(double *)(this + 0x68)) + 1.0) * (dVar7 + dVar7);
      }
      else {
        dVar8 = *(double *)(this + 0x10) - *(double *)(this + 8);
        dVar7 = *(double *)(this + 8) + (dVar9 / dVar7) * (dVar8 + dVar8);
      }
      break;
    }
    dVar7 = *(double *)(this + 0x60);
    if (dVar7 != *(double *)(this + 0x68)) {
      dVar7 = *(double *)(this + 8) +
              (*(double *)(this + 0x10) - *(double *)(this + 8)) *
              ((param_1 - dVar7) / (*(double *)(this + 0x68) - dVar7));
      break;
    }
  default:
    dVar7 = *(double *)(this + 8);
    break;
  case (CurvedVal)0x2:
    dVar7 = ((param_1 - *(double *)(this + 0x60)) /
            (*(double *)(this + 0x68) - *(double *)(this + 0x60))) * 1.570795;
    if (this[0x70] == (CurvedVal)0x2) {
      dVar7 = dVar7 + dVar7;
    }
    if (1.570795 < dVar7) {
      dVar7 = 3.14159 - dVar7;
    }
    dVar7 = cos(dVar7);
    dVar7 = *(double *)(this + 8) +
            (*(double *)(this + 0x10) - *(double *)(this + 8)) * (1.0 - dVar7);
    break;
  case (CurvedVal)0x3:
    dVar7 = ((param_1 - *(double *)(this + 0x60)) /
            (*(double *)(this + 0x68) - *(double *)(this + 0x60))) * 1.570795;
    if (this[0x70] == (CurvedVal)0x2) {
      dVar7 = dVar7 + dVar7;
    }
    fVar6 = sinf((float)dVar7);
    dVar7 = *(double *)(this + 8) +
            (*(double *)(this + 0x10) - *(double *)(this + 8)) * (double)fVar6;
    break;
  case (CurvedVal)0x4:
    dVar7 = ((param_1 - *(double *)(this + 0x60)) /
            (*(double *)(this + 0x68) - *(double *)(this + 0x60))) * 3.14159;
    if (this[0x70] == (CurvedVal)0x2) {
      dVar7 = dVar7 + dVar7;
    }
    dVar7 = cos(dVar7);
    dVar7 = *(double *)(this + 8) +
            (1.0 - dVar7) * (*(double *)(this + 0x10) - *(double *)(this + 8)) * 0.5;
    break;
  case (CurvedVal)0x5:
    dVar7 = ((param_1 - *(double *)(this + 0x60)) /
            (*(double *)(this + 0x68) - *(double *)(this + 0x60))) * 3.14159;
    if (this[0x70] == (CurvedVal)0x2) {
      dVar7 = dVar7 + dVar7;
    }
    if (3.14159 < dVar7) {
      dVar7 = 6.28318 - dVar7;
    }
    if (1.570795 <= dVar7) {
      fVar6 = sinf((float)dVar7);
      dVar7 = *(double *)(this + 8) +
              (2.0 - (double)fVar6) * (*(double *)(this + 0x10) - *(double *)(this + 8)) * 0.5;
    }
    else {
      fVar6 = sinf((float)dVar7);
      dVar7 = *(double *)(this + 8) +
              (double)fVar6 * (*(double *)(this + 0x10) - *(double *)(this + 8)) * 0.5;
    }
    break;
  case (CurvedVal)0x6:
    CheckCurveChange(this);
    lVar5 = *(long *)(this + 0x48);
    if (lVar5 == 0) {
      dVar7 = 0.0;
    }
    else {
      dVar7 = *(double *)(this + 0x68) - *(double *)(this + 0x60);
      if (dVar7 != 0.0) {
        local_10 = (double)CONCAT44(local_10._4_4_,0x3f800000);
        local_14 = (float)((param_1 - *(double *)(this + 0x60)) / dVar7);
        pfVar2 = eastl::min_alt<float>(&local_14,(float *)&local_10);
        fVar6 = *pfVar2;
        if (this[0x70] == (CurvedVal)0x2) {
          if (fVar6 <= 0.5) {
            fVar6 = fVar6 + fVar6;
          }
          else {
            fVar6 = (1.0 - fVar6) + (1.0 - fVar6);
          }
        }
        if (this[0x76] == (CurvedVal)0x0) {
          uVar1 = (uint)(fVar6 * 255.0);
          if (uVar1 == 0xff) {
            dVar7 = *(double *)(this + 8) +
                    (double)*(float *)(lVar5 + 0x3fc) *
                    (*(double *)(this + 0x10) - *(double *)(this + 8));
          }
          else {
            uVar3 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
            fVar6 = fVar6 * 255.0 - (float)(int)uVar1;
            dVar7 = *(double *)(this + 8) +
                    (*(double *)(this + 0x10) - *(double *)(this + 8)) *
                    (double)(fVar6 * *(float *)(lVar5 + uVar3 + 4) +
                            *(float *)(lVar5 + uVar3) * (1.0 - fVar6));
          }
        }
        else {
          fVar6 = (float)SexyMathHermite::Evaluate((SexyMathHermite *)(lVar5 + 0x400),fVar6);
          dVar8 = *(double *)(this + 8);
          dVar7 = dVar8 + (*(double *)(this + 0x10) - dVar8) * (double)fVar6;
          local_10 = dVar7;
          if (this[0x72] == (CurvedVal)0x0) {
            if (*(double *)(this + 0x10) <= dVar8) {
              pdVar4 = std::min<double>(&local_10,(double *)(this + 8));
              pdVar4 = std::max<double>(pdVar4,(double *)(this + 0x10));
              dVar7 = *pdVar4;
            }
            else {
              pdVar4 = std::max<double>(&local_10,(double *)(this + 8));
              pdVar4 = std::min<double>(pdVar4,(double *)(this + 0x10));
              dVar7 = *pdVar4;
            }
          }
        }
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(dVar7);
}


/* Sexy::CurvedVal::GetOutVal() */

void __thiscall Sexy::CurvedVal::GetOutVal(CurvedVal *this)

{
  double dVar1;
  undefined8 uVar2;
  
  dVar1 = (double)GetInVal(this);
  uVar2 = GetOutVal(this,dVar1);
  *(undefined8 *)(this + 0x50) = uVar2;
  return;
}


/* Sexy::CurvedVal::SetCurveMult(std::string const&, Sexy::CurvedVal*) */

void __thiscall Sexy::CurvedVal::SetCurveMult(CurvedVal *this,string *param_1,CurvedVal *param_2)

{
  double dVar1;
  
  dVar1 = (double)GetOutVal(this);
  SetCurve(this,param_1,param_2);
  *(double *)(this + 0x10) = *(double *)(this + 0x10) * dVar1;
  return;
}


/* Sexy::CurvedVal::SetCurveMult(char const**, Sexy::CurvedVal*) */

void __thiscall Sexy::CurvedVal::SetCurveMult(CurvedVal *this,char **param_1,CurvedVal *param_2)

{
  double dVar1;
  
  dVar1 = (double)GetOutVal(this);
  SetCurve(this,param_1,param_2);
  *(double *)(this + 0x10) = *(double *)(this + 0x10) * dVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::CurvedVal::GetInVal() */

void __thiscall Sexy::CurvedVal::GetInVal(CurvedVal *this)

{
  CurvedVal CVar1;
  CurvedVal *this_00;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double local_10;
  long local_8;
  
  local_10 = *(double *)(this + 0x80);
  this_00 = *(CurvedVal **)(this + 0x40);
  local_8 = ___stack_chk_guard;
  if (this_00 == (CurvedVal *)0x0) {
    if (this[0x77] == (CurvedVal)0x0) {
      CVar1 = this[0x70];
      dVar3 = local_10;
    }
    else {
      if (*(int **)(this + 0x38) != (int *)0x0) {
        local_10 = *(double *)(this + 0x60) +
                   *(double *)this * (double)(**(int **)(this + 0x38) - *(int *)(this + 0x30));
      }
      CVar1 = this[0x70];
      if (1 < (byte)((char)CVar1 - 1U)) {
        pdVar2 = std::min<double>(&local_10,(double *)(this + 0x68));
        dVar3 = *pdVar2;
        goto LAB_0512ab0c;
      }
      dVar4 = *(double *)(this + 0x60);
      dVar3 = fmod(local_10 - dVar4,*(double *)(this + 0x68) - dVar4);
      dVar3 = dVar3 + dVar4;
    }
  }
  else if (this_00[0x74] == (CurvedVal)0x0) {
    dVar3 = (double)GetInVal(this_00);
    CVar1 = this[0x70];
  }
  else {
    dVar3 = (double)GetOutVal(this_00);
    CVar1 = this[0x70];
  }
  if (CVar1 == (CurvedVal)0x2) {
    dVar5 = *(double *)(this + 0x60);
    dVar4 = *(double *)(this + 0x68) - dVar5;
    dVar3 = (double)(float)((dVar3 - dVar5) / dVar4);
    if (dVar3 <= 0.5) {
      dVar3 = dVar5 + dVar3 * (dVar4 + dVar4);
    }
    else {
      dVar3 = dVar5 + (1.0 - dVar3) * (dVar4 + dVar4);
    }
  }
LAB_0512ab0c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(dVar3);
  }
  return;
}


/* Sexy::CurvedVal::CheckInThreshold(double) */

bool __thiscall Sexy::CurvedVal::CheckInThreshold(CurvedVal *this,double param_1)

{
  double dVar1;
  double dVar2;
  
  dVar2 = *(double *)(this + 0x78);
  dVar1 = *(double *)(this + 0x80);
  if (this[0x77] != (CurvedVal)0x0) {
    dVar1 = (double)GetInVal(this);
    dVar2 = dVar1 - *(double *)this * 1.5;
  }
  return param_1 <= dVar1 && dVar2 < param_1;
}


/* Sexy::CurvedVal::CheckUpdatesFromEndThreshold(int) */

void __thiscall Sexy::CurvedVal::CheckUpdatesFromEndThreshold(CurvedVal *this,int param_1)

{
  int iVar1;
  double dVar2;
  
  iVar1 = GetLengthInUpdates(this);
  dVar2 = (double)GetInValAtUpdate(this,iVar1 - param_1);
  CheckInThreshold(this,dVar2);
  return;
}


/* Sexy::CurvedVal::HasBeenTriggered() */

CurvedVal __thiscall Sexy::CurvedVal::HasBeenTriggered(CurvedVal *this)

{
  double dVar1;
  
  if (this[0x77] == (CurvedVal)0x0) {
    return this[0x75];
  }
  dVar1 = (double)GetInVal(this);
  this[0x75] = (CurvedVal)(dVar1 == *(double *)(this + 0x68));
  return (CurvedVal)(dVar1 == *(double *)(this + 0x68));
}


/* Sexy::CurvedVal::IsDoingCurve() */

bool __thiscall Sexy::CurvedVal::IsDoingCurve(CurvedVal *this)

{
  bool bVar1;
  double dVar2;
  
  dVar2 = (double)GetInVal(this);
  bVar1 = false;
  if (dVar2 != *(double *)(this + 0x68)) {
    bVar1 = this[0x71] != (CurvedVal)0x0;
  }
  return bVar1;
}


/* Sexy::CurvedVal::SetInVal(double, bool) */

CurvedVal __thiscall Sexy::CurvedVal::SetInVal(CurvedVal *this,double param_1,bool param_2)

{
  char cVar1;
  CurvedVal CVar2;
  undefined8 uVar3;
  
  uVar3 = GetOutVal(this);
  this[0x75] = (CurvedVal)0x0;
  *(undefined8 *)(this + 0x58) = uVar3;
  *(double *)(this + 0x78) = param_1;
  if ((param_2) && (this[0x77] != (CurvedVal)0x0)) {
    *(int *)(this + 0x30) =
         *(int *)(this + 0x30) - (int)((param_1 - *(double *)(this + 0x80)) * 100.0);
  }
  *(double *)(this + 0x80) = param_1;
  cVar1 = CheckClamping(this);
  CVar2 = (CurvedVal)0x1;
  if (cVar1 == '\0') {
    if (this[0x75] == (CurvedVal)0x0) {
      this[0x75] = (CurvedVal)0x1;
      return (CurvedVal)0x0;
    }
    CVar2 = this[0x73];
  }
  return CVar2;
}


/* Sexy::CurvedVal::IncInVal(double) */

CurvedVal __thiscall Sexy::CurvedVal::IncInVal(CurvedVal *this,double param_1)

{
  char cVar1;
  CurvedVal CVar2;
  undefined8 uVar3;
  
  uVar3 = GetOutVal(this);
  *(undefined8 *)(this + 0x58) = uVar3;
  *(double *)(this + 0x78) = *(double *)(this + 0x80);
  *(double *)(this + 0x80) = param_1 + *(double *)(this + 0x80);
  cVar1 = CheckClamping(this);
  CVar2 = (CurvedVal)0x1;
  if (cVar1 == '\0') {
    if (this[0x75] == (CurvedVal)0x0) {
      this[0x75] = (CurvedVal)0x1;
      return (CurvedVal)0x0;
    }
    CVar2 = this[0x73];
  }
  return CVar2;
}


/* Sexy::CurvedVal::IncInVal() */

undefined8 __thiscall Sexy::CurvedVal::IncInVal(CurvedVal *this)

{
  undefined8 uVar1;
  
  if (*(double *)this == 0.0) {
    return 0;
  }
  uVar1 = IncInVal(this,*(double *)this);
  return uVar1;
}


/* Sexy::CurvedVal::GetOutValDelta() */

undefined1  [16] __thiscall Sexy::CurvedVal::GetOutValDelta(CurvedVal *this)

{
  double dVar1;
  undefined1 auVar2 [16];
  
  dVar1 = (double)GetOutVal(this);
  auVar2._0_8_ = dVar1 - *(double *)(this + 0x58);
  auVar2._8_8_ = 0;
  return auVar2;
}


/* Sexy::CurvedVal::FindClosestInToOutVal(double, double, double, double, bool) */

undefined1  [16] __thiscall
Sexy::CurvedVal::FindClosestInToOutVal
          (CurvedVal *this,double param_1,double param_2,double param_3,double param_4,bool param_5)

{
  bool bVar1;
  uint uVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  dVar9 = *(double *)(this + 0x60);
  dVar5 = *(double *)(this + 0x68) - dVar9;
  dVar10 = dVar9 + dVar5 * param_4;
  dVar9 = dVar9 + dVar5 * param_3;
  if (dVar10 < dVar9) {
    dVar9 = -1.0;
  }
  else {
    dVar5 = param_2 * dVar5;
    dVar3 = (double)GetOutVal(this,dVar9);
    uVar2 = (int)(param_1 - dVar3) >> 0x1f;
    dVar3 = (double)(int)(((int)(param_1 - dVar3) ^ uVar2) - uVar2);
    dVar8 = dVar9;
    if (param_5) {
      do {
        dVar9 = dVar8;
        dVar8 = dVar9 + dVar5;
        if (dVar10 < dVar8) break;
        dVar7 = (double)GetOutVal(this,dVar8);
        uVar2 = (int)(param_1 - dVar7) >> 0x1f;
        dVar7 = (double)(int)(((int)(param_1 - dVar7) ^ uVar2) - uVar2);
        bVar1 = dVar7 < dVar3;
        dVar3 = dVar7;
      } while ((bVar1) || (dVar9 < 0.0));
    }
    else {
      while (dVar7 = dVar9 + dVar5, dVar9 = dVar8, dVar7 <= dVar10) {
        while( true ) {
          dVar9 = dVar7;
          dVar7 = (double)GetOutVal(this,dVar9);
          uVar2 = (int)(param_1 - dVar7) >> 0x1f;
          dVar6 = (double)(int)(((int)(param_1 - dVar7) ^ uVar2) - uVar2);
          if ((dVar3 <= dVar6) && (0.0 <= dVar8)) break;
          dVar7 = dVar9 + dVar5;
          dVar3 = dVar6;
          dVar8 = dVar9;
          if (dVar10 < dVar9 + dVar5) goto LAB_0512af58;
        }
      }
    }
  }
LAB_0512af58:
  auVar4._8_8_ = 0;
  auVar4._0_8_ = dVar9;
  return auVar4;
}


/* Sexy::CurvedVal::Intercept(char const**, Sexy::CurvedVal*, double, bool) */

void __thiscall
Sexy::CurvedVal::Intercept
          (CurvedVal *this,char **param_1,CurvedVal *param_2,double param_3,bool param_4)

{
  CurvedVal *this_00;
  double dVar1;
  
  this_00 = this;
  if (param_2 != (CurvedVal *)0x0) {
    this_00 = param_2;
  }
  dVar1 = operator_cast_to_double(this_00);
  SetCurve(this,param_1,(CurvedVal *)0x0);
  dVar1 = (double)FindClosestInToOutVal(this,dVar1,param_3,0.0,1.0,param_4);
  SetInVal(this,dVar1,true);
  return;
}


/* Sexy::CurvedVal::Intercept(std::string const&, Sexy::CurvedVal*, double, bool) */

void __thiscall
Sexy::CurvedVal::Intercept
          (CurvedVal *this,string *param_1,CurvedVal *param_2,double param_3,bool param_4)

{
  CurvedVal *this_00;
  double dVar1;
  
  this_00 = this;
  if (param_2 != (CurvedVal *)0x0) {
    this_00 = param_2;
  }
  dVar1 = operator_cast_to_double(this_00);
  SetCurve(this,param_1,(CurvedVal *)0x0);
  dVar1 = (double)FindClosestInToOutVal(this,dVar1,param_3,0.0,1.0,param_4);
  SetInVal(this,dVar1,true);
  return;
}

