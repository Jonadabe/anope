/*
 * Anope IRC Services
 *
 * Copyright (C) 2015-2016 Anope Team <team@anope.org>
 *
 * This file is part of Anope. Anope is free software; you can
 * redistribute it and/or modify it under the terms of the GNU
 * General Public License as published by the Free Software
 * Foundation, version 2.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, see see <http://www.gnu.org/licenses/>.
 */

#include "modules/memoserv.h"

class IgnoreImpl : public MemoServ::Ignore
{
	friend class IgnoreType;

	MemoServ::MemoInfo *memoinfo = nullptr;
	Anope::string mask;

 public:
	IgnoreImpl(Serialize::TypeBase *type) : MemoServ::Ignore(type) { }
	IgnoreImpl(Serialize::TypeBase *type, Serialize::ID id) : MemoServ::Ignore(type, id) { }
	~IgnoreImpl();

	MemoServ::MemoInfo *GetMemoInfo() override;
	void SetMemoInfo(MemoServ::MemoInfo *) override;

	Anope::string GetMask() override;
	void SetMask(const Anope::string &mask) override;
};