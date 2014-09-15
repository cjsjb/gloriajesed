\context Staff = "tenor" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Tenor"
	\set Staff.shortInstrumentName = "T."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "tenor" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\time 4/4
		\clef "treble_8"
		\key a \major

		R1*4  |
%% 5
		cis' 2 cis'  |
		d' 4 cis' b cis'  |
		a 2 e ~  |
		e 2 r  |
		e 2 e 4 e  |
%% 10
		g 4 fis 8 e d 4 fis  |
		e 1  |
		R1  |
		cis' 2 cis'  |
		d' 4 cis' b cis'  |
%% 15
		a 2 e ~  |
		e 2 r  |
		e 2 e 4 e  |
		g 4 fis 8 e d 4 fis  |
		e 1  |
%% 20
		R1  |
		g 4 g 8 g 4 g r8  |
		a 4 a 8 a 4 a r8  |
		g 4 g 8 g 4 g r8  |
		a 8 a a a 4 a r8  |
%% 25
		cis' 2 cis' 4 cis'  |
		d' 4 cis' b cis'  |
		a 4 e 8 e 4 e ~ e 8 ~  |
		e 2 r  |
		e 2 e  |
%% 30
		g 4 fis d fis  |
		e 1  |
		R1*50  |
		\bar "|."
	}

	\lyricsto "tenor" \new Lyrics \lyricmode {
		Glo -- ria a Dios en el cie -- lo __
		y en la tie -- "rra a" los hom -- bres paz.
		Glo -- ria a Dios en el cie -- lo __
		y en la tie -- "rra a" los hom -- bres paz.

		"Te a" -- la -- ba -- mos, %te
		    ben -- de -- ci -- mos,
		"te a" -- do -- ra -- mos, %te
		    glo -- ri -- fi -- ca -- mos.

		Te da -- mos gra -- cias por "Tu in" -- men -- sa glo -- ria __
		Se -- ñor, Dios, rey ce -- les -- tial.
	}

>>
