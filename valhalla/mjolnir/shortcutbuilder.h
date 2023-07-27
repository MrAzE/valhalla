#ifndef VALHALLA_MJOLNIR_SHORTCUTBUILDER_H
#define VALHALLA_MJOLNIR_SHORTCUTBUILDER_H

#include <cstdint>
#include <boost/property_tree/ptree.hpp>

namespace valhalla {
namespace mjolnir {

/**
 * Class used to build shortcut edges.
 */
class ShortcutBuilder {
 public:

  /**
   * Build the shortcut edges.
   */
  static void Build(const boost::property_tree::ptree& pt);
};

}
}

#endif  // VALHALLA_MJOLNIR_SHORTCUTBUILDER_H
