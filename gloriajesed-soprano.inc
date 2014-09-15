\context Staff = "soprano" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Soprano"
	\set Staff.shortInstrumentName = "S."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "soprano" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\time 4/4
		\clef "treble"
		\key a \major

                R1*6  |
                cis'' 2 cis''  |
                d'' 4 cis'' b' cis''  |
                a' 2 e'  |
%% 10
                R1  |
                e' 2 e' 4 e'  |
                g' 4 fis' 8 e' d' 4 fis'  |
                e' 1  |
                R1  |
%% 15
                cis'' 2 cis''  |
                d'' 4 cis'' b' cis''  |
                a' 2 e'  |
                R1  |
                e' 2 e' 4 e'  |
%% 20
                g' 4 fis' 8 e' d' 4 fis'  |
                e' 2. r8 r  |
                a' 4 a' 8 a' 4 a' r8  |
                g' 4 g' 8 g' 4 g' r8  |
                a' 8 a' a' a' 4 a' r8  |
%% 25
                R1*2  |
                cis'' 2 cis'' 4 cis''  |
                d'' 4 cis'' b' cis''  |
                a' 4 e' 8 e' 4 e' _~ e' 8 _~  |
%% 30
                e' 2 r  |
                e' 2 e'  |
                g' 4 fis' d' fis'  |
                e' 2. r4  |
                R1*48  |
                \bar "|."
	}

	\lyricsto "soprano" \new Lyrics \lyricmode {
		Glo -- ria a Dios en el cie -- lo
		y en la tie -- "rra a" los hom -- bres paz.
		Glo -- ria a Dios en el cie -- lo
		y en la tie -- "rra a" los hom -- bres paz.

		"...Te" ben -- de -- ci -- mos,
		"te a" -- do -- ra -- mos, te glo -- ri -- fi %-- ca -- mos.
		Te da -- mos gra -- cias por "Tu in" -- men -- sa glo -- ria
		Se -- ñor, Dios, rey ce -- "les..."
	}

>>
