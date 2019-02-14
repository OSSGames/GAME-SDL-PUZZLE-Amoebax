//
// Cross-platform free Puyo-Puyo clone.
// Copyright (C) 2006, 2007 Emma's software
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
//
#if !defined (AMOEBAX_DUMB_AI_PLAYER_H)
#define AMOEBAX_DUMB_AI_PLAYER_H

#include "AIPlayer.h"

namespace Amoebax
{
    ///
    /// \class DumbAIPlayer
    /// \brief A very stupid (i.e., random based) computer player.
    ///
    class DumbAIPlayer: public AIPlayer
    {
        public:
            explicit DumbAIPlayer (IPlayer::PlayerSide side);

        protected:
            virtual int32_t computeScore (const GridStatus::PositionResult &result) const;
            virtual bool shouldCheckFollowingFallingPair (void) const;
            virtual bool shouldCheckNextFallingPair (void) const;
            virtual bool shouldThePairFall (void) const;
            virtual bool shouldSatelliteBeVisible (void) const;
    };
}

#endif // !AMOEBAX_DUMB_AI_PLAYER_H
