/*
* File:   band_stop.h
* Author: autogenerated
*
* Created on 
*/

#ifndef _ARBITRARY_H
  #define _ARBITRARY_H
  #define int_16_arbitrary short int
  #define int_32_arbitrary long int
  typedef struct {
      int nb_coeffs;
      int nb_states;
      int_16_arbitrary *coeffs;
      int_32_arbitrary *states;
  } s_16bits_filter_arbitrary;
  typedef s_16bits_filter_arbitrary *p_16bits_filter_arbitrary;
  /* creator of structure p_16bits_filter_arbitrary */
  extern p_16bits_filter_arbitrary new_16bits_filter_arbitrary(void);
  extern void destroy_16bits_filter_arbitrary(p_16bits_filter_arbitrary p_arbitrary);
  extern int_32_arbitrary one_step_16bits_filter_arbitrary(int_16_arbitrary en_16, p_16bits_filter_arbitrary p_arbitrary);
  typedef struct {
      int nb_cels;
      int nb_coeffs;
      int nb_states;
      double *coeffs;
      double *states;
  } s_real_filter_arbitrary;
  typedef s_real_filter_arbitrary *p_real_filter_arbitrary;
  extern double one_step_real_filter_arbitrary(double en, p_real_filter_arbitrary f);
  extern void destroy_real_filter_arbitrary(p_real_filter_arbitrary f);
  extern p_real_filter_arbitrary new_real_filter_arbitrary(void);
#endif /* _ARBITRARY_H */