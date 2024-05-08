/*
 * Copyright (C) 2022 The ESPResSo project
 *
 * This file is part of ESPResSo.
 *
 * ESPResSo is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * ESPResSo is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "script_interface/ScriptInterface.hpp"

#include <string>

namespace ScriptInterface {
namespace Particles {

class ParticleList : public ObjectHandle {

public:
  Variant do_call_method(std::string const &name,
                         VariantMap const &params) override;

  void do_construct(VariantMap const &) override {}

private:
  std::string get_internal_state() const override;
  void set_internal_state(std::string const &state) override;
};

} // namespace Particles
} // namespace ScriptInterface
