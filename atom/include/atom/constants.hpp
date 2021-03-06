#pragma once

#define SYSTEM_CONTRACT eosio::name("eosio")

namespace proton
{
  static constexpr auto SECONDS_IN_MINUTE = 60;
  static constexpr auto SECONDS_IN_HOUR   = SECONDS_IN_MINUTE * 60;
  static constexpr auto SECONDS_IN_DAY    = SECONDS_IN_HOUR * 24;

  namespace Aggregates
  {
    const std::string MODE   = "mode";
    const std::string MEDIAN = "median";
    const std::string MEAN   = "mean";
    const std::string LAST   = "last";
    const std::string SD     = "sd";
  }

  typedef std::variant<
    std::string, // 0
    uint64_t, // 1
    double // 2
  > data_variant;

  static std::map<size_t, std::vector<std::string>> type_index_to_aggregates = {
    { 0, { Aggregates::MODE, Aggregates::LAST } },
    { 1, { Aggregates::MODE, Aggregates::MEDIAN, Aggregates::LAST } },
    { 2, { Aggregates::MODE, Aggregates::MEDIAN, Aggregates::MEAN, Aggregates::LAST, Aggregates::SD } },
  };
} // namespace proton