// Class: DynamicSizeData


/* DynamicSizeData::DynamicSizeData() */

void __thiscall DynamicSizeData::DynamicSizeData(DynamicSizeData *this)

{
  size_t in_x2;
  
  Set8BytesTo0();
  std::string::append((string *)this,"0.0",in_x2);
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DynamicSizeData::SetData(std::string const&) */

void __thiscall DynamicSizeData::SetData(DynamicSizeData *this,string *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  float *pfVar5;
  double dVar6;
  float local_20;
  float local_1c;
  string asStack_18 [8];
  string asStack_10 [8];
  string *local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StringToLower((Sexy *)param_1,___stack_chk_guard);
  thunk_FUN_05475e00(this,asStack_18);
  lVar3 = FUN_05474374(asStack_18,"content_size",0);
  if (lVar3 == -1) {
    lVar3 = FUN_05474374(asStack_18,"image_width",0);
    if (lVar3 == -1) {
      lVar3 = FUN_05474374(asStack_18,"image_height",0);
      if (lVar3 == -1) {
        iVar1 = FUN_054743b0(asStack_18,0x25,0);
        iVar2 = FUN_054743b0(asStack_18,0x70,0);
        if (iVar1 == -1) {
          if (iVar2 == -1) {
            *(undefined4 *)(this + 8) = 0;
            pcVar4 = (char *)FUN_0547429c(asStack_18);
            dVar6 = atof(pcVar4);
            *(float *)(this + 0xc) = (float)dVar6;
          }
          else {
            FUN_05475ffc(asStack_10,asStack_18,0,(long)iVar2);
            *(undefined4 *)(this + 8) = 5;
            pcVar4 = (char *)FUN_0547429c(asStack_10);
            dVar6 = atof(pcVar4);
            *(float *)(this + 0xc) = (float)dVar6;
            std::string::~string(asStack_10);
          }
        }
        else {
          FUN_05475ffc(asStack_10,asStack_18,0,(long)iVar1);
          *(undefined4 *)(this + 8) = 1;
          pcVar4 = (char *)FUN_0547429c(asStack_10);
          dVar6 = atof(pcVar4);
          local_20 = 1.0;
          *(float *)(this + 0xc) = (float)dVar6 * 0.01;
          local_1c = 0.0;
          pfVar5 = eastl::min_alt<float>(&local_20,(float *)(this + 0xc));
          pfVar5 = eastl::max_alt<float>(&local_1c,pfVar5);
          *(float *)(this + 0xc) = *pfVar5;
          std::string::~string(asStack_10);
        }
      }
      else {
        *(undefined4 *)(this + 8) = 4;
        *(undefined4 *)(this + 0xc) = 0;
      }
    }
    else {
      *(undefined4 *)(this + 8) = 3;
      *(undefined4 *)(this + 0xc) = 0;
    }
  }
  else {
    *(undefined4 *)(this + 8) = 2;
    *(undefined4 *)(this + 0xc) = 0;
  }
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

