/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * validatestring.c
 *
 * Code generation for function 'validatestring'
 *
 */

/* Include files */
#include "validatestring.h"
#include "fdCodegen_data.h"
#include "fdCodegen_emxutil.h"
#include "fdCodegen_types.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo qj_emlrtRSI =
    {
        74,               /* lineNo */
        "validatestring", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021b\\toolbox\\eml\\lib\\matlab\\lang\\validatestring"
        ".m" /* pathName */
};

static emlrtRSInfo rj_emlrtRSI =
    {
        111,                  /* lineNo */
        "fullValidatestring", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021b\\toolbox\\eml\\lib\\matlab\\lang\\validatestring"
        ".m" /* pathName */
};

static emlrtRSInfo sj_emlrtRSI =
    {
        164,         /* lineNo */
        "get_match", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021b\\toolbox\\eml\\lib\\matlab\\lang\\validatestring"
        ".m" /* pathName */
};

static emlrtRSInfo
    wj_emlrtRSI =
        {
            240,       /* lineNo */
            "charcmp", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021b\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\strcmp.m" /* pathName */
};

static emlrtRTEInfo k_emlrtRTEI = {
    15,                      /* lineNo */
    9,                       /* colNo */
    "assertSupportedString", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\assertSupportedString.m" /* pName */
};

static emlrtRTEInfo l_emlrtRTEI =
    {
        131,                  /* lineNo */
        9,                    /* colNo */
        "fullValidatestring", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2021b\\toolbox\\eml\\lib\\matlab\\lang\\validatestring"
        ".m" /* pName */
};

static emlrtRTEInfo m_emlrtRTEI =
    {
        139,                  /* lineNo */
        9,                    /* colNo */
        "fullValidatestring", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2021b\\toolbox\\eml\\lib\\matlab\\lang\\validatestring"
        ".m" /* pName */
};

static emlrtRTEInfo jc_emlrtRTEI =
    {
        140,              /* lineNo */
        9,                /* colNo */
        "validatestring", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2021b\\toolbox\\eml\\lib\\matlab\\lang\\validatestring"
        ".m" /* pName */
};

static emlrtRTEInfo kc_emlrtRTEI =
    {
        132,              /* lineNo */
        9,                /* colNo */
        "validatestring", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2021b\\toolbox\\eml\\lib\\matlab\\lang\\validatestring"
        ".m" /* pName */
};

static emlrtRTEInfo lc_emlrtRTEI =
    {
        1,                /* lineNo */
        16,               /* colNo */
        "validatestring", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2021b\\toolbox\\eml\\lib\\matlab\\lang\\validatestring"
        ".m" /* pName */
};

/* Function Definitions */
void validatestring(const emlrtStack *sp, const emxArray_char_T *str,
                    char_T out_data[], int32_T out_size[2])
{
  static const char_T b_cv[128] = {
      '\x00', '\x01', '\x02', '\x03', '\x04', '\x05', '\x06', '\x07', '\x08',
      '	',    '\x0a', '\x0b', '\x0c', '\x0d', '\x0e', '\x0f', '\x10', '\x11',
      '\x12', '\x13', '\x14', '\x15', '\x16', '\x17', '\x18', '\x19', '\x1a',
      '\x1b', '\x1c', '\x1d', '\x1e', '\x1f', ' ',    '!',    '\"',   '#',
      '$',    '%',    '&',    '\'',   '(',    ')',    '*',    '+',    ',',
      '-',    '.',    '/',    '0',    '1',    '2',    '3',    '4',    '5',
      '6',    '7',    '8',    '9',    ':',    ';',    '<',    '=',    '>',
      '?',    '@',    'a',    'b',    'c',    'd',    'e',    'f',    'g',
      'h',    'i',    'j',    'k',    'l',    'm',    'n',    'o',    'p',
      'q',    'r',    's',    't',    'u',    'v',    'w',    'x',    'y',
      'z',    '[',    '\\',   ']',    '^',    '_',    '`',    'a',    'b',
      'c',    'd',    'e',    'f',    'g',    'h',    'i',    'j',    'k',
      'l',    'm',    'n',    'o',    'p',    'q',    'r',    's',    't',
      'u',    'v',    'w',    'x',    'y',    'z',    '{',    '|',    '}',
      '~',    '\x7f'};
  static const char_T cv1[8] = {'r', 'e', 'v', 'o', 'l', 'u', 't', 'e'};
  static const char_T vstr[8] = {'r', 'e', 'v', 'o', 'l', 'u', 't', 'e'};
  static const char_T b_vstr[5] = {'f', 'i', 'x', 'e', 'd'};
  static const char_T cv2[5] = {'f', 'i', 'x', 'e', 'd'};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  emxArray_char_T *r;
  int32_T exitg1;
  int32_T i;
  int32_T minnanb;
  int32_T nmatched;
  int32_T ns;
  int32_T partial_match_size_idx_1;
  char_T partial_match_data[9];
  const char_T *str_data;
  char_T *r1;
  boolean_T b_bool;
  boolean_T b_guard1 = false;
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  boolean_T guard3 = false;
  boolean_T matched;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  str_data = str->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  st.site = &qj_emlrtRSI;
  b_st.site = &rj_emlrtRSI;
  partial_match_size_idx_1 = 8;
  for (i = 0; i < 8; i++) {
    partial_match_data[i] = ' ';
  }
  nmatched = 0;
  matched = false;
  guard1 = false;
  guard2 = false;
  guard3 = false;
  if (str->size[1] <= 8) {
    c_st.site = &sj_emlrtRSI;
    ns = str->size[1];
    d_st.site = &tj_emlrtRSI;
    e_st.site = &uj_emlrtRSI;
    b_bool = false;
    minnanb = str->size[1];
    b_guard1 = false;
    if (ns <= minnanb) {
      ns = muIntScalarMin_sint32(minnanb, ns);
      b_guard1 = true;
    } else if (str->size[1] == 8) {
      ns = 8;
      b_guard1 = true;
    }
    if (b_guard1) {
      minnanb = 0;
      do {
        exitg1 = 0;
        if (minnanb <= ns - 1) {
          f_st.site = &wj_emlrtRSI;
          i = (uint8_T)str_data[minnanb];
          if (i > 127) {
            emlrtErrorWithMessageIdR2018a(
                &f_st, &k_emlrtRTEI, "Coder:toolbox:unsupportedString",
                "Coder:toolbox:unsupportedString", 2, 12, 127);
          }
          if (b_cv[i] != b_cv[(int32_T)cv1[minnanb]]) {
            exitg1 = 1;
          } else {
            minnanb++;
          }
        } else {
          b_bool = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }
    if (b_bool) {
      if (str->size[1] == 8) {
        nmatched = 1;
        for (i = 0; i < 8; i++) {
          partial_match_data[i] = vstr[i];
        }
      } else {
        for (i = 0; i < 8; i++) {
          partial_match_data[i] = vstr[i];
        }
        matched = true;
        nmatched = 1;
        guard3 = true;
      }
    } else {
      guard3 = true;
    }
  } else {
    guard3 = true;
  }
  if (guard3) {
    if (str->size[1] <= 9) {
      c_st.site = &sj_emlrtRSI;
      ns = str->size[1];
      d_st.site = &tj_emlrtRSI;
      e_st.site = &uj_emlrtRSI;
      b_bool = false;
      minnanb = str->size[1];
      b_guard1 = false;
      if (ns <= minnanb) {
        ns = muIntScalarMin_sint32(minnanb, ns);
        b_guard1 = true;
      } else if (str->size[1] == 9) {
        ns = 9;
        b_guard1 = true;
      }
      if (b_guard1) {
        minnanb = 0;
        do {
          exitg1 = 0;
          if (minnanb <= ns - 1) {
            f_st.site = &wj_emlrtRSI;
            i = (uint8_T)str_data[minnanb];
            if (i > 127) {
              emlrtErrorWithMessageIdR2018a(
                  &f_st, &k_emlrtRTEI, "Coder:toolbox:unsupportedString",
                  "Coder:toolbox:unsupportedString", 2, 12, 127);
            }
            if (b_cv[i] != b_cv[(int32_T)cv[minnanb]]) {
              exitg1 = 1;
            } else {
              minnanb++;
            }
          } else {
            b_bool = true;
            exitg1 = 1;
          }
        } while (exitg1 == 0);
      }
      if (b_bool) {
        if (str->size[1] == 9) {
          nmatched = 1;
          partial_match_size_idx_1 = 9;
          for (i = 0; i < 9; i++) {
            partial_match_data[i] = cv[i];
          }
        } else {
          if (!matched) {
            partial_match_size_idx_1 = 9;
            for (i = 0; i < 9; i++) {
              partial_match_data[i] = cv[i];
            }
          }
          matched = true;
          nmatched++;
          guard2 = true;
        }
      } else {
        guard2 = true;
      }
    } else {
      guard2 = true;
    }
  }
  if (guard2) {
    if (str->size[1] <= 5) {
      c_st.site = &sj_emlrtRSI;
      ns = str->size[1];
      d_st.site = &tj_emlrtRSI;
      e_st.site = &uj_emlrtRSI;
      b_bool = false;
      minnanb = str->size[1];
      b_guard1 = false;
      if (ns <= minnanb) {
        ns = muIntScalarMin_sint32(minnanb, ns);
        b_guard1 = true;
      } else if (str->size[1] == 5) {
        ns = 5;
        b_guard1 = true;
      }
      if (b_guard1) {
        minnanb = 0;
        do {
          exitg1 = 0;
          if (minnanb <= ns - 1) {
            f_st.site = &wj_emlrtRSI;
            i = (uint8_T)str_data[minnanb];
            if (i > 127) {
              emlrtErrorWithMessageIdR2018a(
                  &f_st, &k_emlrtRTEI, "Coder:toolbox:unsupportedString",
                  "Coder:toolbox:unsupportedString", 2, 12, 127);
            }
            if (b_cv[i] != b_cv[(int32_T)cv2[minnanb]]) {
              exitg1 = 1;
            } else {
              minnanb++;
            }
          } else {
            b_bool = true;
            exitg1 = 1;
          }
        } while (exitg1 == 0);
      }
      if (b_bool) {
        if (str->size[1] == 5) {
          nmatched = 1;
          partial_match_size_idx_1 = 5;
          for (i = 0; i < 5; i++) {
            partial_match_data[i] = b_vstr[i];
          }
        } else {
          if (!matched) {
            partial_match_size_idx_1 = 5;
            for (i = 0; i < 5; i++) {
              partial_match_data[i] = b_vstr[i];
            }
          }
          nmatched++;
          guard1 = true;
        }
      } else {
        guard1 = true;
      }
    } else {
      guard1 = true;
    }
  }
  if (guard1 && (nmatched == 0)) {
    partial_match_size_idx_1 = 8;
    for (i = 0; i < 8; i++) {
      partial_match_data[i] = ' ';
    }
  }
  emxInit_char_T(&st, &r, &lc_emlrtRTEI);
  if ((nmatched == 0) || (str->size[1] == 0)) {
    out_size[0] = 1;
    out_size[1] = 8;
    for (i = 0; i < 8; i++) {
      out_data[i] = ' ';
    }
    if ((nmatched == 0) || (str->size[1] == 0)) {
      i = r->size[0] * r->size[1];
      r->size[0] = 1;
      r->size[1] = str->size[1] + 5;
      emxEnsureCapacity_char_T(&st, r, i, &kc_emlrtRTEI);
      r1 = r->data;
      r1[0] = ',';
      r1[1] = ' ';
      r1[2] = '\'';
      ns = str->size[1];
      for (i = 0; i < ns; i++) {
        r1[i + 3] = str_data[i];
      }
      r1[str->size[1] + 3] = '\'';
      r1[str->size[1] + 4] = ',';
      emlrtErrorWithMessageIdR2018a(
          &st, &l_emlrtRTEI,
          "Coder:toolbox:ValidatestringUnrecognizedStringChoice",
          "MATLAB:rigidBodyJoint:unrecognizedStringChoice", 9, 4, 5, "jtype", 4,
          32, "\'revolute\', \'prismatic\', \'fixed\'", 4, r->size[1], &r1[0]);
    }
  } else if (nmatched > 1) {
    i = r->size[0] * r->size[1];
    r->size[0] = 1;
    r->size[1] = str->size[1] + 5;
    emxEnsureCapacity_char_T(&st, r, i, &jc_emlrtRTEI);
    r1 = r->data;
    r1[0] = ',';
    r1[1] = ' ';
    r1[2] = '\'';
    ns = str->size[1];
    for (i = 0; i < ns; i++) {
      r1[i + 3] = str_data[i];
    }
    r1[str->size[1] + 3] = '\'';
    r1[str->size[1] + 4] = ',';
    emlrtErrorWithMessageIdR2018a(
        &st, &m_emlrtRTEI, "Coder:toolbox:ValidatestringAmbiguousStringChoice",
        "MATLAB:rigidBodyJoint:ambiguousStringChoice", 9, 4, 5, "jtype", 4, 32,
        "\'revolute\', \'prismatic\', \'fixed\'", 4, r->size[1], &r1[0]);
  } else {
    out_size[0] = 1;
    out_size[1] = partial_match_size_idx_1;
    if (0 <= partial_match_size_idx_1 - 1) {
      memcpy(&out_data[0], &partial_match_data[0],
             partial_match_size_idx_1 * sizeof(char_T));
    }
  }
  emxFree_char_T(&st, &r);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (validatestring.c) */
