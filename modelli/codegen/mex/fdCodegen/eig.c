/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * eig.c
 *
 * Code generation for function 'eig'
 *
 */

/* Include files */
#include "eig.h"
#include "anyNonFinite.h"
#include "fdCodegen_data.h"
#include "rt_nonfinite.h"
#include "schur.h"
#include "warning.h"
#include "xzggbal.h"
#include "xzhgeqz.h"
#include "xzlartg.h"
#include "mwmathutil.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo bd_emlrtRSI = {
    93,    /* lineNo */
    "eig", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\eml\\lib\\matlab\\matfun\\eig.m" /* pathName
                                                                       */
};

static emlrtRSInfo cd_emlrtRSI = {
    139,   /* lineNo */
    "eig", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\eml\\lib\\matlab\\matfun\\eig.m" /* pathName
                                                                       */
};

static emlrtRSInfo dd_emlrtRSI = {
    147,   /* lineNo */
    "eig", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\eml\\lib\\matlab\\matfun\\eig.m" /* pathName
                                                                       */
};

static emlrtRSInfo ed_emlrtRSI = {
    155,   /* lineNo */
    "eig", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\eml\\lib\\matlab\\matfun\\eig.m" /* pathName
                                                                       */
};

static emlrtRSInfo jd_emlrtRSI = {
    21,                     /* lineNo */
    "eigHermitianStandard", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eigHerm"
    "itianStandard.m" /* pathName */
};

static emlrtRSInfo mf_emlrtRSI = {
    10,                         /* lineNo */
    "eigSkewHermitianStandard", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eigSkew"
    "HermitianStandard.m" /* pathName */
};

static emlrtRSInfo nf_emlrtRSI = {
    12,                             /* lineNo */
    "eigRealSkewSymmetricStandard", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eigReal"
    "SkewSymmetricStandard.m" /* pathName */
};

static emlrtRSInfo of_emlrtRSI = {
    59,            /* lineNo */
    "eigStandard", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eigStan"
    "dard.m" /* pathName */
};

static emlrtRSInfo pf_emlrtRSI = {
    53,            /* lineNo */
    "eigStandard", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eigStan"
    "dard.m" /* pathName */
};

static emlrtRSInfo qf_emlrtRSI = {
    29,       /* lineNo */
    "xzgeev", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzgeev.m" /* pathName */
};

static emlrtRSInfo rf_emlrtRSI = {
    39,       /* lineNo */
    "xzggev", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzggev.m" /* pathName */
};

static emlrtRSInfo sf_emlrtRSI = {
    84,       /* lineNo */
    "xzggev", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzggev.m" /* pathName */
};

static emlrtRSInfo tf_emlrtRSI = {
    124,      /* lineNo */
    "xzggev", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzggev.m" /* pathName */
};

static emlrtRSInfo uf_emlrtRSI = {
    125,      /* lineNo */
    "xzggev", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzggev.m" /* pathName */
};

static emlrtRSInfo eg_emlrtRSI = {
    66,        /* lineNo */
    "xzgghrd", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzgghrd.m" /* pathName */
};

/* Function Definitions */
void eig(const emlrtStack *sp, const real_T A[9], creal_T V[3])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  creal_T At[9];
  creal_T beta1[3];
  creal_T s;
  real_T T[9];
  real_T b_A[9];
  real_T a;
  real_T absxk;
  real_T anrm;
  real_T anrmto;
  real_T cfrom1;
  real_T cto1;
  real_T ctoc;
  int32_T rscale[3];
  int32_T exitg1;
  int32_T i;
  int32_T ihi;
  int32_T info;
  int32_T jcol;
  boolean_T b_guard1 = false;
  boolean_T exitg2;
  boolean_T guard1 = false;
  boolean_T ilascl;
  boolean_T notdone;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &bd_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  if (anyNonFinite(A)) {
    V[0].re = rtNaN;
    V[0].im = 0.0;
    V[1].re = rtNaN;
    V[1].im = 0.0;
    V[2].re = rtNaN;
    V[2].im = 0.0;
  } else {
    ilascl = true;
    jcol = 0;
    exitg2 = false;
    while ((!exitg2) && (jcol < 3)) {
      i = 0;
      do {
        exitg1 = 0;
        if (i <= jcol) {
          if (!(A[i + 3 * jcol] == A[jcol + 3 * i])) {
            ilascl = false;
            exitg1 = 1;
          } else {
            i++;
          }
        } else {
          jcol++;
          exitg1 = 2;
        }
      } while (exitg1 == 0);
      if (exitg1 == 1) {
        exitg2 = true;
      }
    }
    if (ilascl) {
      st.site = &cd_emlrtRSI;
      memcpy(&b_A[0], &A[0], 9U * sizeof(real_T));
      b_st.site = &jd_emlrtRSI;
      schur(&b_st, b_A, T);
      V[0].re = T[0];
      V[0].im = 0.0;
      V[1].re = T[4];
      V[1].im = 0.0;
      V[2].re = T[8];
      V[2].im = 0.0;
    } else {
      ilascl = true;
      jcol = 0;
      exitg2 = false;
      while ((!exitg2) && (jcol < 3)) {
        i = 0;
        do {
          exitg1 = 0;
          if (i <= jcol) {
            if (!(A[i + 3 * jcol] == -A[jcol + 3 * i])) {
              ilascl = false;
              exitg1 = 1;
            } else {
              i++;
            }
          } else {
            jcol++;
            exitg1 = 2;
          }
        } while (exitg1 == 0);
        if (exitg1 == 1) {
          exitg2 = true;
        }
      }
      if (ilascl) {
        st.site = &dd_emlrtRSI;
        b_st.site = &mf_emlrtRSI;
        memcpy(&b_A[0], &A[0], 9U * sizeof(real_T));
        c_st.site = &nf_emlrtRSI;
        schur(&c_st, b_A, T);
        i = 1;
        do {
          exitg1 = 0;
          if (i <= 3) {
            guard1 = false;
            if (i != 3) {
              absxk = T[i + 3 * (i - 1)];
              if (absxk != 0.0) {
                absxk = muDoubleScalarAbs(absxk);
                V[i - 1].re = 0.0;
                V[i - 1].im = absxk;
                V[i].re = 0.0;
                V[i].im = -absxk;
                i += 2;
              } else {
                guard1 = true;
              }
            } else {
              guard1 = true;
            }
            if (guard1) {
              V[i - 1].re = 0.0;
              V[i - 1].im = 0.0;
              i++;
            }
          } else {
            exitg1 = 1;
          }
        } while (exitg1 == 0);
      } else {
        st.site = &ed_emlrtRSI;
        b_st.site = &pf_emlrtRSI;
        for (i = 0; i < 9; i++) {
          At[i].re = A[i];
          At[i].im = 0.0;
        }
        c_st.site = &qf_emlrtRSI;
        info = 0;
        d_st.site = &rf_emlrtRSI;
        anrm = 0.0;
        jcol = 0;
        exitg2 = false;
        while ((!exitg2) && (jcol < 9)) {
          absxk = muDoubleScalarHypot(At[jcol].re, 0.0);
          if (muDoubleScalarIsNaN(absxk)) {
            anrm = rtNaN;
            exitg2 = true;
          } else {
            if (absxk > anrm) {
              anrm = absxk;
            }
            jcol++;
          }
        }
        if (muDoubleScalarIsInf(anrm) || muDoubleScalarIsNaN(anrm)) {
          V[0].re = rtNaN;
          V[0].im = 0.0;
          beta1[0].re = rtNaN;
          beta1[0].im = 0.0;
          V[1].re = rtNaN;
          V[1].im = 0.0;
          beta1[1].re = rtNaN;
          beta1[1].im = 0.0;
          V[2].re = rtNaN;
          V[2].im = 0.0;
          beta1[2].re = rtNaN;
          beta1[2].im = 0.0;
        } else {
          ilascl = false;
          anrmto = anrm;
          b_guard1 = false;
          if ((anrm > 0.0) && (anrm < 6.7178761075670888E-139)) {
            anrmto = 6.7178761075670888E-139;
            ilascl = true;
            b_guard1 = true;
          } else if (anrm > 1.4885657073574029E+138) {
            anrmto = 1.4885657073574029E+138;
            ilascl = true;
            b_guard1 = true;
          }
          if (b_guard1) {
            absxk = anrm;
            ctoc = anrmto;
            notdone = true;
            while (notdone) {
              cfrom1 = absxk * 2.0041683600089728E-292;
              cto1 = ctoc / 4.9896007738368E+291;
              if ((cfrom1 > ctoc) && (ctoc != 0.0)) {
                a = 2.0041683600089728E-292;
                absxk = cfrom1;
              } else if (cto1 > absxk) {
                a = 4.9896007738368E+291;
                ctoc = cto1;
              } else {
                a = ctoc / absxk;
                notdone = false;
              }
              for (i = 0; i < 9; i++) {
                At[i].re *= a;
                At[i].im *= a;
              }
            }
          }
          d_st.site = &sf_emlrtRSI;
          xzggbal(&d_st, At, &i, &ihi, rscale);
          d_st.site = &tf_emlrtRSI;
          if (ihi >= i + 2) {
            jcol = i;
            while (jcol < 2) {
              e_st.site = &eg_emlrtRSI;
              xzlartg(&e_st, At[1], At[2], &absxk, &s, &At[1]);
              At[2].re = 0.0;
              At[2].im = 0.0;
              ctoc = s.re * At[5].re - s.im * At[5].im;
              cfrom1 = s.re * At[5].im + s.im * At[5].re;
              At[5].re = absxk * At[5].re - (s.re * At[4].re + s.im * At[4].im);
              At[5].im = absxk * At[5].im - (s.re * At[4].im - s.im * At[4].re);
              At[4].re = absxk * At[4].re + ctoc;
              At[4].im = absxk * At[4].im + cfrom1;
              ctoc = s.re * At[8].re - s.im * At[8].im;
              cfrom1 = s.re * At[8].im + s.im * At[8].re;
              At[8].re = absxk * At[8].re - (s.re * At[7].re + s.im * At[7].im);
              At[8].im = absxk * At[8].im - (s.re * At[7].im - s.im * At[7].re);
              At[7].re = absxk * At[7].re + ctoc;
              At[7].im = absxk * At[7].im + cfrom1;
              s.re = -s.re;
              s.im = -s.im;
              ctoc = s.re * At[3].re - s.im * At[3].im;
              cfrom1 = s.re * At[3].im + s.im * At[3].re;
              At[3].re = absxk * At[3].re - (s.re * At[6].re + s.im * At[6].im);
              At[3].im = absxk * At[3].im - (s.re * At[6].im - s.im * At[6].re);
              At[6].re = absxk * At[6].re + ctoc;
              At[6].im = absxk * At[6].im + cfrom1;
              ctoc = s.re * At[4].re - s.im * At[4].im;
              cfrom1 = s.re * At[4].im + s.im * At[4].re;
              At[4].re = absxk * At[4].re - (s.re * At[7].re + s.im * At[7].im);
              At[4].im = absxk * At[4].im - (s.re * At[7].im - s.im * At[7].re);
              At[7].re = absxk * At[7].re + ctoc;
              At[7].im = absxk * At[7].im + cfrom1;
              ctoc = s.re * At[5].re - s.im * At[5].im;
              cfrom1 = s.re * At[5].im + s.im * At[5].re;
              At[5].re = absxk * At[5].re - (s.re * At[8].re + s.im * At[8].im);
              At[5].im = absxk * At[5].im - (s.re * At[8].im - s.im * At[8].re);
              At[8].re = absxk * At[8].re + ctoc;
              At[8].im = absxk * At[8].im + cfrom1;
              jcol = 2;
            }
          }
          d_st.site = &uf_emlrtRSI;
          xzhgeqz(&d_st, At, i, ihi, &info, V, beta1);
          if ((info == 0) && ilascl) {
            notdone = true;
            while (notdone) {
              cfrom1 = anrmto * 2.0041683600089728E-292;
              cto1 = anrm / 4.9896007738368E+291;
              if ((cfrom1 > anrm) && (anrm != 0.0)) {
                a = 2.0041683600089728E-292;
                anrmto = cfrom1;
              } else if (cto1 > anrmto) {
                a = 4.9896007738368E+291;
                anrm = cto1;
              } else {
                a = anrm / anrmto;
                notdone = false;
              }
              V[0].re *= a;
              V[0].im *= a;
              V[1].re *= a;
              V[1].im *= a;
              V[2].re *= a;
              V[2].im *= a;
            }
          }
        }
        if (beta1[0].im == 0.0) {
          if (V[0].im == 0.0) {
            cto1 = V[0].re / beta1[0].re;
            absxk = 0.0;
          } else if (V[0].re == 0.0) {
            cto1 = 0.0;
            absxk = V[0].im / beta1[0].re;
          } else {
            cto1 = V[0].re / beta1[0].re;
            absxk = V[0].im / beta1[0].re;
          }
        } else if (beta1[0].re == 0.0) {
          if (V[0].re == 0.0) {
            cto1 = V[0].im / beta1[0].im;
            absxk = 0.0;
          } else if (V[0].im == 0.0) {
            cto1 = 0.0;
            absxk = -(V[0].re / beta1[0].im);
          } else {
            cto1 = V[0].im / beta1[0].im;
            absxk = -(V[0].re / beta1[0].im);
          }
        } else {
          cfrom1 = muDoubleScalarAbs(beta1[0].re);
          absxk = muDoubleScalarAbs(beta1[0].im);
          if (cfrom1 > absxk) {
            absxk = beta1[0].im / beta1[0].re;
            ctoc = beta1[0].re + absxk * beta1[0].im;
            cto1 = (V[0].re + absxk * V[0].im) / ctoc;
            absxk = (V[0].im - absxk * V[0].re) / ctoc;
          } else if (absxk == cfrom1) {
            if (beta1[0].re > 0.0) {
              absxk = 0.5;
            } else {
              absxk = -0.5;
            }
            if (beta1[0].im > 0.0) {
              ctoc = 0.5;
            } else {
              ctoc = -0.5;
            }
            cto1 = (V[0].re * absxk + V[0].im * ctoc) / cfrom1;
            absxk = (V[0].im * absxk - V[0].re * ctoc) / cfrom1;
          } else {
            absxk = beta1[0].re / beta1[0].im;
            ctoc = beta1[0].im + absxk * beta1[0].re;
            cto1 = (absxk * V[0].re + V[0].im) / ctoc;
            absxk = (absxk * V[0].im - V[0].re) / ctoc;
          }
        }
        V[0].re = cto1;
        V[0].im = absxk;
        if (beta1[1].im == 0.0) {
          if (V[1].im == 0.0) {
            cto1 = V[1].re / beta1[1].re;
            absxk = 0.0;
          } else if (V[1].re == 0.0) {
            cto1 = 0.0;
            absxk = V[1].im / beta1[1].re;
          } else {
            cto1 = V[1].re / beta1[1].re;
            absxk = V[1].im / beta1[1].re;
          }
        } else if (beta1[1].re == 0.0) {
          if (V[1].re == 0.0) {
            cto1 = V[1].im / beta1[1].im;
            absxk = 0.0;
          } else if (V[1].im == 0.0) {
            cto1 = 0.0;
            absxk = -(V[1].re / beta1[1].im);
          } else {
            cto1 = V[1].im / beta1[1].im;
            absxk = -(V[1].re / beta1[1].im);
          }
        } else {
          cfrom1 = muDoubleScalarAbs(beta1[1].re);
          absxk = muDoubleScalarAbs(beta1[1].im);
          if (cfrom1 > absxk) {
            absxk = beta1[1].im / beta1[1].re;
            ctoc = beta1[1].re + absxk * beta1[1].im;
            cto1 = (V[1].re + absxk * V[1].im) / ctoc;
            absxk = (V[1].im - absxk * V[1].re) / ctoc;
          } else if (absxk == cfrom1) {
            if (beta1[1].re > 0.0) {
              absxk = 0.5;
            } else {
              absxk = -0.5;
            }
            if (beta1[1].im > 0.0) {
              ctoc = 0.5;
            } else {
              ctoc = -0.5;
            }
            cto1 = (V[1].re * absxk + V[1].im * ctoc) / cfrom1;
            absxk = (V[1].im * absxk - V[1].re * ctoc) / cfrom1;
          } else {
            absxk = beta1[1].re / beta1[1].im;
            ctoc = beta1[1].im + absxk * beta1[1].re;
            cto1 = (absxk * V[1].re + V[1].im) / ctoc;
            absxk = (absxk * V[1].im - V[1].re) / ctoc;
          }
        }
        V[1].re = cto1;
        V[1].im = absxk;
        if (beta1[2].im == 0.0) {
          if (V[2].im == 0.0) {
            cto1 = V[2].re / beta1[2].re;
            absxk = 0.0;
          } else if (V[2].re == 0.0) {
            cto1 = 0.0;
            absxk = V[2].im / beta1[2].re;
          } else {
            cto1 = V[2].re / beta1[2].re;
            absxk = V[2].im / beta1[2].re;
          }
        } else if (beta1[2].re == 0.0) {
          if (V[2].re == 0.0) {
            cto1 = V[2].im / beta1[2].im;
            absxk = 0.0;
          } else if (V[2].im == 0.0) {
            cto1 = 0.0;
            absxk = -(V[2].re / beta1[2].im);
          } else {
            cto1 = V[2].im / beta1[2].im;
            absxk = -(V[2].re / beta1[2].im);
          }
        } else {
          cfrom1 = muDoubleScalarAbs(beta1[2].re);
          absxk = muDoubleScalarAbs(beta1[2].im);
          if (cfrom1 > absxk) {
            absxk = beta1[2].im / beta1[2].re;
            ctoc = beta1[2].re + absxk * beta1[2].im;
            cto1 = (V[2].re + absxk * V[2].im) / ctoc;
            absxk = (V[2].im - absxk * V[2].re) / ctoc;
          } else if (absxk == cfrom1) {
            if (beta1[2].re > 0.0) {
              absxk = 0.5;
            } else {
              absxk = -0.5;
            }
            if (beta1[2].im > 0.0) {
              ctoc = 0.5;
            } else {
              ctoc = -0.5;
            }
            cto1 = (V[2].re * absxk + V[2].im * ctoc) / cfrom1;
            absxk = (V[2].im * absxk - V[2].re * ctoc) / cfrom1;
          } else {
            absxk = beta1[2].re / beta1[2].im;
            ctoc = beta1[2].im + absxk * beta1[2].re;
            cto1 = (absxk * V[2].re + V[2].im) / ctoc;
            absxk = (absxk * V[2].im - V[2].re) / ctoc;
          }
        }
        V[2].re = cto1;
        V[2].im = absxk;
        if (info != 0) {
          b_st.site = &of_emlrtRSI;
          b_warning(&b_st);
        }
      }
    }
  }
}

/* End of code generation (eig.c) */
