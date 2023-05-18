// Generated by rstantools.  Do not edit by hand.

/*
    measr is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    measr is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with measr.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef MODELS_HPP
#define MODELS_HPP
#define STAN__SERVICES__COMMAND_HPP
#ifndef USE_STANC3
#define USE_STANC3
#endif
#include <rstan/rstaninc.hpp>
// Code generated by stanc v2.26.1-4-gd72b68b7-dirty
#include <stan/model/model_header.hpp>
namespace model_gqs_loglik_namespace {
inline void validate_positive_index(const char* var_name, const char* expr,
                                    int val) {
  if (val < 1) {
    std::stringstream msg;
    msg << "Found dimension size less than one in simplex declaration"
        << "; variable=" << var_name << "; dimension size expression=" << expr
        << "; expression value=" << val;
    std::string msg_str(msg.str());
    throw std::invalid_argument(msg_str.c_str());
  }
}
inline void validate_unit_vector_index(const char* var_name, const char* expr,
                                       int val) {
  if (val <= 1) {
    std::stringstream msg;
    if (val == 1) {
      msg << "Found dimension size one in unit vector declaration."
          << " One-dimensional unit vector is discrete"
          << " but the target distribution must be continuous."
          << " variable=" << var_name << "; dimension size expression=" << expr;
    } else {
      msg << "Found dimension size less than one in unit vector declaration"
          << "; variable=" << var_name << "; dimension size expression=" << expr
          << "; expression value=" << val;
    }
    std::string msg_str(msg.str());
    throw std::invalid_argument(msg_str.c_str());
  }
}
using std::istream;
using std::string;
using std::stringstream;
using std::vector;
using std::pow;
using stan::io::dump;
using stan::math::lgamma;
using stan::model::model_base_crtp;
using stan::model::rvalue;
using stan::model::cons_list;
using stan::model::index_uni;
using stan::model::index_max;
using stan::model::index_min;
using stan::model::index_min_max;
using stan::model::index_multi;
using stan::model::index_omni;
using stan::model::nil_index_list;
using namespace stan::math;
using stan::math::pow; 
stan::math::profile_map profiles__;
static int current_statement__= 0;
static const std::vector<string> locations_array__ = {" (found before start of program)",
                                                      " (in 'gqs_loglik', line 16, column 2 to column 19)",
                                                      " (in 'gqs_loglik', line 17, column 2 to column 17)",
                                                      " (in 'gqs_loglik', line 20, column 2 to column 20)",
                                                      " (in 'gqs_loglik', line 22, column 15 to column 16)",
                                                      " (in 'gqs_loglik', line 22, column 4 to column 29)",
                                                      " (in 'gqs_loglik', line 24, column 21 to column 27)",
                                                      " (in 'gqs_loglik', line 24, column 6 to column 29)",
                                                      " (in 'gqs_loglik', line 26, column 8 to column 37)",
                                                      " (in 'gqs_loglik', line 27, column 8 to line 28, column 68)",
                                                      " (in 'gqs_loglik', line 25, column 26 to line 29, column 7)",
                                                      " (in 'gqs_loglik', line 25, column 6 to line 29, column 7)",
                                                      " (in 'gqs_loglik', line 30, column 6 to column 49)",
                                                      " (in 'gqs_loglik', line 23, column 19 to line 31, column 5)",
                                                      " (in 'gqs_loglik', line 23, column 4 to line 31, column 5)",
                                                      " (in 'gqs_loglik', line 32, column 4 to column 41)",
                                                      " (in 'gqs_loglik', line 21, column 17 to line 33, column 3)",
                                                      " (in 'gqs_loglik', line 21, column 2 to line 33, column 3)",
                                                      " (in 'gqs_loglik', line 2, column 2 to column 17)",
                                                      " (in 'gqs_loglik', line 3, column 2 to column 17)",
                                                      " (in 'gqs_loglik', line 4, column 2 to column 17)",
                                                      " (in 'gqs_loglik', line 5, column 2 to column 17)",
                                                      " (in 'gqs_loglik', line 6, column 2 to column 17)",
                                                      " (in 'gqs_loglik', line 7, column 26 to column 27)",
                                                      " (in 'gqs_loglik', line 7, column 2 to column 29)",
                                                      " (in 'gqs_loglik', line 8, column 26 to column 27)",
                                                      " (in 'gqs_loglik', line 8, column 2 to column 29)",
                                                      " (in 'gqs_loglik', line 9, column 25 to column 26)",
                                                      " (in 'gqs_loglik', line 9, column 2 to column 28)",
                                                      " (in 'gqs_loglik', line 10, column 29 to column 30)",
                                                      " (in 'gqs_loglik', line 10, column 2 to column 32)",
                                                      " (in 'gqs_loglik', line 11, column 27 to column 28)",
                                                      " (in 'gqs_loglik', line 11, column 2 to column 30)",
                                                      " (in 'gqs_loglik', line 12, column 9 to column 10)",
                                                      " (in 'gqs_loglik', line 12, column 11 to column 12)",
                                                      " (in 'gqs_loglik', line 12, column 2 to column 20)",
                                                      " (in 'gqs_loglik', line 13, column 9 to column 10)",
                                                      " (in 'gqs_loglik', line 13, column 11 to column 12)",
                                                      " (in 'gqs_loglik', line 13, column 2 to column 17)",
                                                      " (in 'gqs_loglik', line 16, column 9 to column 10)",
                                                      " (in 'gqs_loglik', line 17, column 9 to column 10)",
                                                      " (in 'gqs_loglik', line 17, column 11 to column 12)",
                                                      " (in 'gqs_loglik', line 20, column 9 to column 10)"};
#include <stan_meta_header.hpp>
class model_gqs_loglik final : public model_base_crtp<model_gqs_loglik> {
private:
  int I;
  int R;
  int N;
  int C;
  int A;
  std::vector<int> ii;
  std::vector<int> rr;
  std::vector<int> y;
  std::vector<int> start;
  std::vector<int> num;
  Eigen::Matrix<double, -1, -1> Alpha;
  Eigen::Matrix<double, -1, -1> Xi;
 
public:
  ~model_gqs_loglik() { }
  
  inline std::string model_name() const final { return "model_gqs_loglik"; }
  inline std::vector<std::string> model_compile_info() const noexcept {
    return std::vector<std::string>{"stanc_version = stanc3 v2.26.1-4-gd72b68b7-dirty", "stancflags = "};
  }
  
  
  model_gqs_loglik(stan::io::var_context& context__,
                   unsigned int random_seed__ = 0,
                   std::ostream* pstream__ = nullptr) : model_base_crtp(0) {
    using local_scalar_t__ = double ;
    boost::ecuyer1988 base_rng__ = 
        stan::services::util::create_rng(random_seed__, 0);
    (void) base_rng__;  // suppress unused var warning
    static const char* function__ = "model_gqs_loglik_namespace::model_gqs_loglik";
    (void) function__;  // suppress unused var warning
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    (void) DUMMY_VAR__;  // suppress unused var warning
    
    try {
      int pos__;
      pos__ = std::numeric_limits<int>::min();
      
      pos__ = 1;
      current_statement__ = 18;
      context__.validate_dims("data initialization","I","int",
          context__.to_vec());
      I = std::numeric_limits<int>::min();
      
      current_statement__ = 18;
      I = context__.vals_i("I")[(1 - 1)];
      current_statement__ = 18;
      current_statement__ = 18;
      check_greater_or_equal(function__, "I", I, 1);
      current_statement__ = 19;
      context__.validate_dims("data initialization","R","int",
          context__.to_vec());
      R = std::numeric_limits<int>::min();
      
      current_statement__ = 19;
      R = context__.vals_i("R")[(1 - 1)];
      current_statement__ = 19;
      current_statement__ = 19;
      check_greater_or_equal(function__, "R", R, 1);
      current_statement__ = 20;
      context__.validate_dims("data initialization","N","int",
          context__.to_vec());
      N = std::numeric_limits<int>::min();
      
      current_statement__ = 20;
      N = context__.vals_i("N")[(1 - 1)];
      current_statement__ = 20;
      current_statement__ = 20;
      check_greater_or_equal(function__, "N", N, 1);
      current_statement__ = 21;
      context__.validate_dims("data initialization","C","int",
          context__.to_vec());
      C = std::numeric_limits<int>::min();
      
      current_statement__ = 21;
      C = context__.vals_i("C")[(1 - 1)];
      current_statement__ = 21;
      current_statement__ = 21;
      check_greater_or_equal(function__, "C", C, 1);
      current_statement__ = 22;
      context__.validate_dims("data initialization","A","int",
          context__.to_vec());
      A = std::numeric_limits<int>::min();
      
      current_statement__ = 22;
      A = context__.vals_i("A")[(1 - 1)];
      current_statement__ = 22;
      current_statement__ = 22;
      check_greater_or_equal(function__, "A", A, 1);
      current_statement__ = 23;
      validate_non_negative_index("ii", "N", N);
      current_statement__ = 24;
      context__.validate_dims("data initialization","ii","int",
          context__.to_vec(N));
      ii = std::vector<int>(N, std::numeric_limits<int>::min());
      
      current_statement__ = 24;
      assign(ii, nil_index_list(), context__.vals_i("ii"),
        "assigning variable ii");
      current_statement__ = 24;
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        current_statement__ = 24;
        current_statement__ = 24;
        check_greater_or_equal(function__, "ii[sym1__]", ii[(sym1__ - 1)], 1);
      }
      current_statement__ = 24;
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        current_statement__ = 24;
        current_statement__ = 24;
        check_less_or_equal(function__, "ii[sym1__]", ii[(sym1__ - 1)], I);}
      current_statement__ = 25;
      validate_non_negative_index("rr", "N", N);
      current_statement__ = 26;
      context__.validate_dims("data initialization","rr","int",
          context__.to_vec(N));
      rr = std::vector<int>(N, std::numeric_limits<int>::min());
      
      current_statement__ = 26;
      assign(rr, nil_index_list(), context__.vals_i("rr"),
        "assigning variable rr");
      current_statement__ = 26;
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        current_statement__ = 26;
        current_statement__ = 26;
        check_greater_or_equal(function__, "rr[sym1__]", rr[(sym1__ - 1)], 1);
      }
      current_statement__ = 26;
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        current_statement__ = 26;
        current_statement__ = 26;
        check_less_or_equal(function__, "rr[sym1__]", rr[(sym1__ - 1)], R);}
      current_statement__ = 27;
      validate_non_negative_index("y", "N", N);
      current_statement__ = 28;
      context__.validate_dims("data initialization","y","int",
          context__.to_vec(N));
      y = std::vector<int>(N, std::numeric_limits<int>::min());
      
      current_statement__ = 28;
      assign(y, nil_index_list(), context__.vals_i("y"),
        "assigning variable y");
      current_statement__ = 28;
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        current_statement__ = 28;
        current_statement__ = 28;
        check_greater_or_equal(function__, "y[sym1__]", y[(sym1__ - 1)], 0);}
      current_statement__ = 28;
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        current_statement__ = 28;
        current_statement__ = 28;
        check_less_or_equal(function__, "y[sym1__]", y[(sym1__ - 1)], 1);}
      current_statement__ = 29;
      validate_non_negative_index("start", "R", R);
      current_statement__ = 30;
      context__.validate_dims("data initialization","start","int",
          context__.to_vec(R));
      start = std::vector<int>(R, std::numeric_limits<int>::min());
      
      current_statement__ = 30;
      assign(start, nil_index_list(), context__.vals_i("start"),
        "assigning variable start");
      current_statement__ = 30;
      for (int sym1__ = 1; sym1__ <= R; ++sym1__) {
        current_statement__ = 30;
        current_statement__ = 30;
        check_greater_or_equal(function__, "start[sym1__]",
                               start[(sym1__ - 1)], 1);}
      current_statement__ = 30;
      for (int sym1__ = 1; sym1__ <= R; ++sym1__) {
        current_statement__ = 30;
        current_statement__ = 30;
        check_less_or_equal(function__, "start[sym1__]", start[(sym1__ - 1)],
                            N);}
      current_statement__ = 31;
      validate_non_negative_index("num", "R", R);
      current_statement__ = 32;
      context__.validate_dims("data initialization","num","int",
          context__.to_vec(R));
      num = std::vector<int>(R, std::numeric_limits<int>::min());
      
      current_statement__ = 32;
      assign(num, nil_index_list(), context__.vals_i("num"),
        "assigning variable num");
      current_statement__ = 32;
      for (int sym1__ = 1; sym1__ <= R; ++sym1__) {
        current_statement__ = 32;
        current_statement__ = 32;
        check_greater_or_equal(function__, "num[sym1__]", num[(sym1__ - 1)],
                               1);}
      current_statement__ = 32;
      for (int sym1__ = 1; sym1__ <= R; ++sym1__) {
        current_statement__ = 32;
        current_statement__ = 32;
        check_less_or_equal(function__, "num[sym1__]", num[(sym1__ - 1)], I);
      }
      current_statement__ = 33;
      validate_non_negative_index("Alpha", "C", C);
      current_statement__ = 34;
      validate_non_negative_index("Alpha", "A", A);
      current_statement__ = 35;
      context__.validate_dims("data initialization","Alpha","double",
          context__.to_vec(C, A));
      Alpha = Eigen::Matrix<double, -1, -1>(C, A);
      stan::math::fill(Alpha, std::numeric_limits<double>::quiet_NaN());
      
      {
        std::vector<local_scalar_t__> Alpha_flat__;
        current_statement__ = 35;
        assign(Alpha_flat__, nil_index_list(), context__.vals_r("Alpha"),
          "assigning variable Alpha_flat__");
        current_statement__ = 35;
        pos__ = 1;
        current_statement__ = 35;
        for (int sym1__ = 1; sym1__ <= A; ++sym1__) {
          current_statement__ = 35;
          for (int sym2__ = 1; sym2__ <= C; ++sym2__) {
            current_statement__ = 35;
            assign(Alpha,
              cons_list(index_uni(sym2__),
                cons_list(index_uni(sym1__), nil_index_list())),
              Alpha_flat__[(pos__ - 1)], "assigning variable Alpha");
            current_statement__ = 35;
            pos__ = (pos__ + 1);}}
      }
      current_statement__ = 36;
      validate_non_negative_index("Xi", "I", I);
      current_statement__ = 37;
      validate_non_negative_index("Xi", "C", C);
      current_statement__ = 38;
      context__.validate_dims("data initialization","Xi","double",
          context__.to_vec(I, C));
      Xi = Eigen::Matrix<double, -1, -1>(I, C);
      stan::math::fill(Xi, std::numeric_limits<double>::quiet_NaN());
      
      {
        std::vector<local_scalar_t__> Xi_flat__;
        current_statement__ = 38;
        assign(Xi_flat__, nil_index_list(), context__.vals_r("Xi"),
          "assigning variable Xi_flat__");
        current_statement__ = 38;
        pos__ = 1;
        current_statement__ = 38;
        for (int sym1__ = 1; sym1__ <= C; ++sym1__) {
          current_statement__ = 38;
          for (int sym2__ = 1; sym2__ <= I; ++sym2__) {
            current_statement__ = 38;
            assign(Xi,
              cons_list(index_uni(sym2__),
                cons_list(index_uni(sym1__), nil_index_list())),
              Xi_flat__[(pos__ - 1)], "assigning variable Xi");
            current_statement__ = 38;
            pos__ = (pos__ + 1);}}
      }
      current_statement__ = 39;
      validate_non_negative_index("log_Vc", "C", C);
      current_statement__ = 40;
      validate_non_negative_index("pi", "I", I);
      current_statement__ = 41;
      validate_non_negative_index("pi", "C", C);
      current_statement__ = 42;
      validate_non_negative_index("log_lik", "R", R);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
      // Next line prevents compiler griping about no return
      throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***"); 
    }
    num_params_r__ = 0U;
    
    try {
      num_params_r__ += C;
      num_params_r__ += I * C;
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
      // Next line prevents compiler griping about no return
      throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***"); 
    }
  }
  template <bool propto__, bool jacobian__, typename VecR, typename VecI, stan::require_vector_like_t<VecR>* = nullptr, stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr>
  inline stan::scalar_type_t<VecR> log_prob_impl(VecR& params_r__,
                                                 VecI& params_i__,
                                                 std::ostream* pstream__ = nullptr) const {
    using T__ = stan::scalar_type_t<VecR>;
    using local_scalar_t__ = T__;
    T__ lp__(0.0);
    stan::math::accumulator<T__> lp_accum__;
    static const char* function__ = "model_gqs_loglik_namespace::log_prob";
(void) function__;  // suppress unused var warning
    stan::io::reader<local_scalar_t__> in__(params_r__, params_i__);
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    (void) DUMMY_VAR__;  // suppress unused var warning
    
    try {
      Eigen::Matrix<local_scalar_t__, -1, 1> log_Vc;
      log_Vc = Eigen::Matrix<local_scalar_t__, -1, 1>(C);
      stan::math::fill(log_Vc, DUMMY_VAR__);
      
      current_statement__ = 1;
      log_Vc = in__.vector(C);
      Eigen::Matrix<local_scalar_t__, -1, -1> pi;
      pi = Eigen::Matrix<local_scalar_t__, -1, -1>(I, C);
      stan::math::fill(pi, DUMMY_VAR__);
      
      current_statement__ = 2;
      pi = in__.matrix(I, C);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
      // Next line prevents compiler griping about no return
      throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***"); 
    }
    lp_accum__.add(lp__);
    return lp_accum__.sum();
    } // log_prob_impl() 
    
  template <typename RNG, typename VecR, typename VecI, typename VecVar, stan::require_vector_like_vt<std::is_floating_point, VecR>* = nullptr, stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr, stan::require_std_vector_vt<std::is_floating_point, VecVar>* = nullptr>
  inline void write_array_impl(RNG& base_rng__, VecR& params_r__,
                               VecI& params_i__, VecVar& vars__,
                               const bool emit_transformed_parameters__ = true,
                               const bool emit_generated_quantities__ = true,
                               std::ostream* pstream__ = nullptr) const {
    using local_scalar_t__ = double;
    vars__.resize(0);
    stan::io::reader<local_scalar_t__> in__(params_r__, params_i__);
    static const char* function__ = "model_gqs_loglik_namespace::write_array";
(void) function__;  // suppress unused var warning
    (void) function__;  // suppress unused var warning
    double lp__ = 0.0;
    (void) lp__;  // dummy to suppress unused var warning
    stan::math::accumulator<double> lp_accum__;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    (void) DUMMY_VAR__;  // suppress unused var warning
    
    try {
      Eigen::Matrix<double, -1, 1> log_Vc;
      log_Vc = Eigen::Matrix<double, -1, 1>(C);
      stan::math::fill(log_Vc, std::numeric_limits<double>::quiet_NaN());
      
      current_statement__ = 1;
      log_Vc = in__.vector(C);
      Eigen::Matrix<double, -1, -1> pi;
      pi = Eigen::Matrix<double, -1, -1>(I, C);
      stan::math::fill(pi, std::numeric_limits<double>::quiet_NaN());
      
      current_statement__ = 2;
      pi = in__.matrix(I, C);
      for (int sym1__ = 1; sym1__ <= C; ++sym1__) {
        vars__.emplace_back(log_Vc[(sym1__ - 1)]);}
      for (int sym1__ = 1; sym1__ <= C; ++sym1__) {
        for (int sym2__ = 1; sym2__ <= I; ++sym2__) {
          vars__.emplace_back(
            rvalue(pi,
              cons_list(index_uni(sym2__),
                cons_list(index_uni(sym1__), nil_index_list())), "pi"));}}
      if (logical_negation((primitive_value(emit_transformed_parameters__) ||
            primitive_value(emit_generated_quantities__)))) {
        return ;
      } 
      if (logical_negation(emit_generated_quantities__)) {
        return ;
      } 
      Eigen::Matrix<double, -1, 1> log_lik;
      log_lik = Eigen::Matrix<double, -1, 1>(R);
      stan::math::fill(log_lik, std::numeric_limits<double>::quiet_NaN());
      
      current_statement__ = 17;
      for (int r = 1; r <= R; ++r) {
        current_statement__ = 4;
        validate_non_negative_index("prob_joint", "C", C);
        Eigen::Matrix<double, 1, -1> prob_joint;
        prob_joint = Eigen::Matrix<double, 1, -1>(C);
        stan::math::fill(prob_joint, std::numeric_limits<double>::quiet_NaN());
        
        current_statement__ = 14;
        for (int c = 1; c <= C; ++c) {
          current_statement__ = 6;
          validate_non_negative_index("log_items", "num[r]", num[(r - 1)]);
          std::vector<double> log_items;
          log_items = std::vector<double>(num[(r - 1)], std::numeric_limits<double>::quiet_NaN());
          
          current_statement__ = 11;
          for (int m = 1; m <= num[(r - 1)]; ++m) {
            int i;
            i = std::numeric_limits<int>::min();
            
            current_statement__ = 8;
            i = ii[(((start[(r - 1)] + m) - 1) - 1)];
            current_statement__ = 9;
            assign(log_items, cons_list(index_uni(m), nil_index_list()),
              ((y[(((start[(r - 1)] + m) - 1) - 1)] *
                 stan::math::log(
                   rvalue(pi,
                     cons_list(index_uni(i),
                       cons_list(index_uni(c), nil_index_list())), "pi"))) +
                ((1 - y[(((start[(r - 1)] + m) - 1) - 1)]) *
                  stan::math::log(
                    (1 -
                      rvalue(pi,
                        cons_list(index_uni(i),
                          cons_list(index_uni(c), nil_index_list())), "pi"))))),
              "assigning variable log_items");}
          current_statement__ = 12;
          assign(prob_joint, cons_list(index_uni(c), nil_index_list()),
            (log_Vc[(c - 1)] + sum(log_items)),
            "assigning variable prob_joint");}
        current_statement__ = 15;
        assign(log_lik, cons_list(index_uni(r), nil_index_list()),
          log_sum_exp(prob_joint), "assigning variable log_lik");}
      for (int sym1__ = 1; sym1__ <= R; ++sym1__) {
        vars__.emplace_back(log_lik[(sym1__ - 1)]);}
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
      // Next line prevents compiler griping about no return
      throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***"); 
    }
    } // write_array_impl() 
    
  template <typename VecVar, typename VecI, stan::require_std_vector_t<VecVar>* = nullptr, stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr>
  inline void transform_inits_impl(const stan::io::var_context& context__,
                                   VecI& params_i__, VecVar& vars__,
                                   std::ostream* pstream__ = nullptr) const {
    using local_scalar_t__ = double;
    vars__.clear();
    vars__.reserve(num_params_r__);
    
    try {
      int pos__;
      pos__ = std::numeric_limits<int>::min();
      
      pos__ = 1;
      Eigen::Matrix<double, -1, 1> log_Vc;
      log_Vc = Eigen::Matrix<double, -1, 1>(C);
      stan::math::fill(log_Vc, std::numeric_limits<double>::quiet_NaN());
      
      {
        std::vector<local_scalar_t__> log_Vc_flat__;
        current_statement__ = 1;
        assign(log_Vc_flat__, nil_index_list(), context__.vals_r("log_Vc"),
          "assigning variable log_Vc_flat__");
        current_statement__ = 1;
        pos__ = 1;
        current_statement__ = 1;
        for (int sym1__ = 1; sym1__ <= C; ++sym1__) {
          current_statement__ = 1;
          assign(log_Vc, cons_list(index_uni(sym1__), nil_index_list()),
            log_Vc_flat__[(pos__ - 1)], "assigning variable log_Vc");
          current_statement__ = 1;
          pos__ = (pos__ + 1);}
      }
      Eigen::Matrix<double, -1, -1> pi;
      pi = Eigen::Matrix<double, -1, -1>(I, C);
      stan::math::fill(pi, std::numeric_limits<double>::quiet_NaN());
      
      {
        std::vector<local_scalar_t__> pi_flat__;
        current_statement__ = 2;
        assign(pi_flat__, nil_index_list(), context__.vals_r("pi"),
          "assigning variable pi_flat__");
        current_statement__ = 2;
        pos__ = 1;
        current_statement__ = 2;
        for (int sym1__ = 1; sym1__ <= C; ++sym1__) {
          current_statement__ = 2;
          for (int sym2__ = 1; sym2__ <= I; ++sym2__) {
            current_statement__ = 2;
            assign(pi,
              cons_list(index_uni(sym2__),
                cons_list(index_uni(sym1__), nil_index_list())),
              pi_flat__[(pos__ - 1)], "assigning variable pi");
            current_statement__ = 2;
            pos__ = (pos__ + 1);}}
      }
      for (int sym1__ = 1; sym1__ <= C; ++sym1__) {
        vars__.emplace_back(log_Vc[(sym1__ - 1)]);}
      for (int sym1__ = 1; sym1__ <= C; ++sym1__) {
        for (int sym2__ = 1; sym2__ <= I; ++sym2__) {
          vars__.emplace_back(
            rvalue(pi,
              cons_list(index_uni(sym2__),
                cons_list(index_uni(sym1__), nil_index_list())), "pi"));}}
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
      // Next line prevents compiler griping about no return
      throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***"); 
    }
    } // transform_inits_impl() 
    
  inline void get_param_names(std::vector<std::string>& names__) const {
    
    names__.clear();
    names__.emplace_back("log_Vc");
    names__.emplace_back("pi");
    names__.emplace_back("log_lik");
    } // get_param_names() 
    
  inline void get_dims(std::vector<std::vector<size_t>>& dimss__) const {
    dimss__.clear();
    dimss__.emplace_back(std::vector<size_t>{static_cast<size_t>(C)});
    
    dimss__.emplace_back(std::vector<size_t>{static_cast<size_t>(I),
                                             static_cast<size_t>(C)});
    
    dimss__.emplace_back(std::vector<size_t>{static_cast<size_t>(R)});
    
    } // get_dims() 
    
  inline void constrained_param_names(
                                      std::vector<std::string>& param_names__,
                                      bool emit_transformed_parameters__ = true,
                                      bool emit_generated_quantities__ = true) const
    final {
    
    for (int sym1__ = 1; sym1__ <= C; ++sym1__) {
      {
        param_names__.emplace_back(std::string() + "log_Vc" + '.' + std::to_string(sym1__));
      }}
    for (int sym1__ = 1; sym1__ <= C; ++sym1__) {
      {
        for (int sym2__ = 1; sym2__ <= I; ++sym2__) {
          {
            param_names__.emplace_back(std::string() + "pi" + '.' + std::to_string(sym2__) + '.' + std::to_string(sym1__));
          }}
      }}
    if (emit_transformed_parameters__) {
      
    }
    
    if (emit_generated_quantities__) {
      for (int sym1__ = 1; sym1__ <= R; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "log_lik" + '.' + std::to_string(sym1__));
        }}
    }
    
    } // constrained_param_names() 
    
  inline void unconstrained_param_names(
                                        std::vector<std::string>& param_names__,
                                        bool emit_transformed_parameters__ = true,
                                        bool emit_generated_quantities__ = true) const
    final {
    
    for (int sym1__ = 1; sym1__ <= C; ++sym1__) {
      {
        param_names__.emplace_back(std::string() + "log_Vc" + '.' + std::to_string(sym1__));
      }}
    for (int sym1__ = 1; sym1__ <= C; ++sym1__) {
      {
        for (int sym2__ = 1; sym2__ <= I; ++sym2__) {
          {
            param_names__.emplace_back(std::string() + "pi" + '.' + std::to_string(sym2__) + '.' + std::to_string(sym1__));
          }}
      }}
    if (emit_transformed_parameters__) {
      
    }
    
    if (emit_generated_quantities__) {
      for (int sym1__ = 1; sym1__ <= R; ++sym1__) {
        {
          param_names__.emplace_back(std::string() + "log_lik" + '.' + std::to_string(sym1__));
        }}
    }
    
    } // unconstrained_param_names() 
    
  inline std::string get_constrained_sizedtypes() const {
    stringstream s__;
    s__ << "[{\"name\":\"log_Vc\",\"type\":{\"name\":\"vector\",\"length\":" << C << "},\"block\":\"parameters\"},{\"name\":\"pi\",\"type\":{\"name\":\"matrix\",\"rows\":" << I << ",\"cols\":" << C << "},\"block\":\"parameters\"},{\"name\":\"log_lik\",\"type\":{\"name\":\"vector\",\"length\":" << R << "},\"block\":\"generated_quantities\"}]";
    return s__.str();
    } // get_constrained_sizedtypes() 
    
  inline std::string get_unconstrained_sizedtypes() const {
    stringstream s__;
    s__ << "[{\"name\":\"log_Vc\",\"type\":{\"name\":\"vector\",\"length\":" << C << "},\"block\":\"parameters\"},{\"name\":\"pi\",\"type\":{\"name\":\"matrix\",\"rows\":" << I << ",\"cols\":" << C << "},\"block\":\"parameters\"},{\"name\":\"log_lik\",\"type\":{\"name\":\"vector\",\"length\":" << R << "},\"block\":\"generated_quantities\"}]";
    return s__.str();
    } // get_unconstrained_sizedtypes() 
    
  
    // Begin method overload boilerplate
    template <typename RNG>
    inline void write_array(RNG& base_rng,
                            Eigen::Matrix<double,Eigen::Dynamic,1>& params_r,
                            Eigen::Matrix<double,Eigen::Dynamic,1>& vars,
                            const bool emit_transformed_parameters = true,
                            const bool emit_generated_quantities = true,
                            std::ostream* pstream = nullptr) const {
      std::vector<double> vars_vec(vars.size());
      std::vector<int> params_i;
      write_array_impl(base_rng, params_r, params_i, vars_vec,
          emit_transformed_parameters, emit_generated_quantities, pstream);
      vars.resize(vars_vec.size());
      for (int i = 0; i < vars.size(); ++i) {
        vars.coeffRef(i) = vars_vec[i];
      }
    }
    template <typename RNG>
    inline void write_array(RNG& base_rng, std::vector<double>& params_r,
                            std::vector<int>& params_i,
                            std::vector<double>& vars,
                            bool emit_transformed_parameters = true,
                            bool emit_generated_quantities = true,
                            std::ostream* pstream = nullptr) const {
      write_array_impl(base_rng, params_r, params_i, vars, emit_transformed_parameters, emit_generated_quantities, pstream);
    }
    template <bool propto__, bool jacobian__, typename T_>
    inline T_ log_prob(Eigen::Matrix<T_,Eigen::Dynamic,1>& params_r,
                       std::ostream* pstream = nullptr) const {
      Eigen::Matrix<int, -1, 1> params_i;
      return log_prob_impl<propto__, jacobian__>(params_r, params_i, pstream);
    }
    template <bool propto__, bool jacobian__, typename T__>
    inline T__ log_prob(std::vector<T__>& params_r,
                        std::vector<int>& params_i,
                        std::ostream* pstream = nullptr) const {
      return log_prob_impl<propto__, jacobian__>(params_r, params_i, pstream);
    }
  
    inline void transform_inits(const stan::io::var_context& context,
                         Eigen::Matrix<double, Eigen::Dynamic, 1>& params_r,
                         std::ostream* pstream = nullptr) const final {
      std::vector<double> params_r_vec(params_r.size());
      std::vector<int> params_i;
      transform_inits_impl(context, params_i, params_r_vec, pstream);
      params_r.resize(params_r_vec.size());
      for (int i = 0; i < params_r.size(); ++i) {
        params_r.coeffRef(i) = params_r_vec[i];
      }
    }
    inline void transform_inits(const stan::io::var_context& context,
                                std::vector<int>& params_i,
                                std::vector<double>& vars,
                                std::ostream* pstream = nullptr) const final {
      transform_inits_impl(context, params_i, vars, pstream);
    }        
};
}
using stan_model = model_gqs_loglik_namespace::model_gqs_loglik;
#ifndef USING_R
// Boilerplate
stan::model::model_base& new_model(
        stan::io::var_context& data_context,
        unsigned int seed,
        std::ostream* msg_stream) {
  stan_model* m = new stan_model(data_context, seed, msg_stream);
  return *m;
}
stan::math::profile_map& get_stan_profile_data() {
  return model_gqs_loglik_namespace::profiles__;
}
#endif
#endif