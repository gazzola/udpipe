// This file is part of UDPipe <http://github.com/ufal/udpipe/>.
//
// Copyright 2015 Institute of Formal and Applied Linguistics, Faculty of
// Mathematics and Physics, Charles University in Prague, Czech Republic.
//
// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at http://mozilla.org/MPL/2.0/.

#pragma once

#include "common.h"

namespace ufal {
namespace udpipe {

class word {
 public:
  int id;         // 0 is root, >0 is sentence word, <0 is undefined
  string form;    // form
  string lemma;   // lemma
  string upostag; // universal part-of-speech tag
  string xpostag; // language-specific part-of-speech tag
  string feats;   // list of morphological features
  int head;       // head, 0 is root, <0 is undefined
  string deprel;  // dependency relation to the head
  string deps;    // secondary dependencies
  string misc;    // miscellaneous information

  vector<int> children;

  word(int id = -1, const string& form = string()) : id(id), form(form), head(-1) {}
};

} // namespace udpipe
} // namespace ufal