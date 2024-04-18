// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rm_decision_interfaces:msg/AllRobotHP.idl
// generated code does not contain a copyright notice

#ifndef RM_DECISION_INTERFACES__MSG__DETAIL__ALL_ROBOT_HP__TRAITS_HPP_
#define RM_DECISION_INTERFACES__MSG__DETAIL__ALL_ROBOT_HP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rm_decision_interfaces/msg/detail/all_robot_hp__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rm_decision_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const AllRobotHP & msg,
  std::ostream & out)
{
  out << "{";
  // member: red_1_robot_hp
  {
    out << "red_1_robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red_1_robot_hp, out);
    out << ", ";
  }

  // member: red_2_robot_hp
  {
    out << "red_2_robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red_2_robot_hp, out);
    out << ", ";
  }

  // member: red_3_robot_hp
  {
    out << "red_3_robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red_3_robot_hp, out);
    out << ", ";
  }

  // member: red_4_robot_hp
  {
    out << "red_4_robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red_4_robot_hp, out);
    out << ", ";
  }

  // member: red_5_robot_hp
  {
    out << "red_5_robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red_5_robot_hp, out);
    out << ", ";
  }

  // member: red_7_robot_hp
  {
    out << "red_7_robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red_7_robot_hp, out);
    out << ", ";
  }

  // member: red_outpost_hp
  {
    out << "red_outpost_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red_outpost_hp, out);
    out << ", ";
  }

  // member: red_base_hp
  {
    out << "red_base_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red_base_hp, out);
    out << ", ";
  }

  // member: blue_1_robot_hp
  {
    out << "blue_1_robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_1_robot_hp, out);
    out << ", ";
  }

  // member: blue_2_robot_hp
  {
    out << "blue_2_robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_2_robot_hp, out);
    out << ", ";
  }

  // member: blue_3_robot_hp
  {
    out << "blue_3_robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_3_robot_hp, out);
    out << ", ";
  }

  // member: blue_4_robot_hp
  {
    out << "blue_4_robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_4_robot_hp, out);
    out << ", ";
  }

  // member: blue_5_robot_hp
  {
    out << "blue_5_robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_5_robot_hp, out);
    out << ", ";
  }

  // member: blue_7_robot_hp
  {
    out << "blue_7_robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_7_robot_hp, out);
    out << ", ";
  }

  // member: blue_outpost_hp
  {
    out << "blue_outpost_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_outpost_hp, out);
    out << ", ";
  }

  // member: blue_base_hp
  {
    out << "blue_base_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_base_hp, out);
    out << ", ";
  }

  // member: color
  {
    out << "color: ";
    rosidl_generator_traits::value_to_yaml(msg.color, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AllRobotHP & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: red_1_robot_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "red_1_robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red_1_robot_hp, out);
    out << "\n";
  }

  // member: red_2_robot_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "red_2_robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red_2_robot_hp, out);
    out << "\n";
  }

  // member: red_3_robot_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "red_3_robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red_3_robot_hp, out);
    out << "\n";
  }

  // member: red_4_robot_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "red_4_robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red_4_robot_hp, out);
    out << "\n";
  }

  // member: red_5_robot_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "red_5_robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red_5_robot_hp, out);
    out << "\n";
  }

  // member: red_7_robot_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "red_7_robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red_7_robot_hp, out);
    out << "\n";
  }

  // member: red_outpost_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "red_outpost_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red_outpost_hp, out);
    out << "\n";
  }

  // member: red_base_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "red_base_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red_base_hp, out);
    out << "\n";
  }

  // member: blue_1_robot_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blue_1_robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_1_robot_hp, out);
    out << "\n";
  }

  // member: blue_2_robot_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blue_2_robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_2_robot_hp, out);
    out << "\n";
  }

  // member: blue_3_robot_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blue_3_robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_3_robot_hp, out);
    out << "\n";
  }

  // member: blue_4_robot_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blue_4_robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_4_robot_hp, out);
    out << "\n";
  }

  // member: blue_5_robot_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blue_5_robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_5_robot_hp, out);
    out << "\n";
  }

  // member: blue_7_robot_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blue_7_robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_7_robot_hp, out);
    out << "\n";
  }

  // member: blue_outpost_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blue_outpost_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_outpost_hp, out);
    out << "\n";
  }

  // member: blue_base_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blue_base_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_base_hp, out);
    out << "\n";
  }

  // member: color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "color: ";
    rosidl_generator_traits::value_to_yaml(msg.color, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AllRobotHP & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace rm_decision_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use rm_decision_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rm_decision_interfaces::msg::AllRobotHP & msg,
  std::ostream & out, size_t indentation = 0)
{
  rm_decision_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rm_decision_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const rm_decision_interfaces::msg::AllRobotHP & msg)
{
  return rm_decision_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rm_decision_interfaces::msg::AllRobotHP>()
{
  return "rm_decision_interfaces::msg::AllRobotHP";
}

template<>
inline const char * name<rm_decision_interfaces::msg::AllRobotHP>()
{
  return "rm_decision_interfaces/msg/AllRobotHP";
}

template<>
struct has_fixed_size<rm_decision_interfaces::msg::AllRobotHP>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rm_decision_interfaces::msg::AllRobotHP>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rm_decision_interfaces::msg::AllRobotHP>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RM_DECISION_INTERFACES__MSG__DETAIL__ALL_ROBOT_HP__TRAITS_HPP_
