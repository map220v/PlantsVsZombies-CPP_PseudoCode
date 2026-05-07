// Class: MatrixPusher


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MatrixPusher::CalcTransformMatrix(float, float, float) */

void __thiscall
MatrixPusher::CalcTransformMatrix(MatrixPusher *this,float param_1,float param_2,float param_3)

{
  SexyTransform2D aSStack_a8 [40];
  SexyTransform2D aSStack_80 [8];
  undefined1 auStack_78 [12];
  undefined1 auStack_6c [20];
  SexyTransform2D aSStack_58 [8];
  undefined1 auStack_50 [12];
  undefined1 auStack_44 [20];
  SexyMatrix3 aSStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::SexyTransform2D::SexyTransform2D(aSStack_a8);
  Sexy::SexyTransform2D::SexyTransform2D(aSStack_80);
  Sexy::SexyTransform2D::SexyTransform2D(aSStack_58);
  FUN_0329b260(param_2,param_3,auStack_78,auStack_6c);
  Sexy::SexyTransform2D::Scale(aSStack_a8,param_1,param_1);
  FUN_0329b260(-param_2,-param_3,auStack_50,auStack_44);
  Sexy::SexyMatrix3::operator*((SexyMatrix3 *)aSStack_80,(SexyMatrix3 *)aSStack_a8);
  Sexy::SexyMatrix3::operator*(aSStack_30,(SexyMatrix3 *)aSStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MatrixPusher::MatrixPusher(Sexy::Graphics*, float, float, float) */

void __thiscall
MatrixPusher::MatrixPusher
          (MatrixPusher *this,Graphics *param_1,float param_2,float param_3,float param_4)

{
  Graphics3D *this_00;
  SexyMatrix3 aSStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(Graphics **)this = param_1;
  CalcTransformMatrix(this,param_2,param_3,param_4);
  this_00 = (Graphics3D *)Sexy::Graphics::Get3D(*(Graphics **)this);
  Sexy::Graphics3D::PushTransform(this_00,aSStack_30,true);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MatrixPusher::~MatrixPusher() */

void __thiscall MatrixPusher::~MatrixPusher(MatrixPusher *this)

{
  Graphics3D *this_00;
  
  this_00 = (Graphics3D *)Sexy::Graphics::Get3D(*(Graphics **)this);
  Sexy::Graphics3D::PopTransform(this_00);
  return;
}

