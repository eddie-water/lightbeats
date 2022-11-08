# About Light Beats
AudioVisual applications that runs using openFrameworks libraries. Turns songs of all kinds into 'intelligent' audio-responsive visuals in real time. Eventually want to incorporate ML kinda like Spotify does and create visuals, color maps, and animations that correspond to the songs 'mood'

# Potential Names
- Light Beats (its okay)
- Auxisuals (how do you even pronouns that)
- Visuaux (hard to read)
- Soundesigns (already taken fml)
- LI-LO (line in light out. don't love it)


# Overall Funcionality
- Analyzes songs for frequency content, with respect to time?
- Need to figure out how real-time (RT) this can be
- Determines a Song Profile with important characteristics related to the 'mood' or 'vibe' of the song (lol)
- When certain frequency bands (FB) surpass a certain volume threshold, these will trigger effects and or visual stimulators
- Song Profile determines color mappings and overall types and intensity of visual stimulations
- User can upload any visual video or image and add audio-responsive elements to their art
- User can upload little small images (2D and 3D objects) and populate a space with audio-responsive objects.


## Audio Profile
- Every song will get a song profile which determines the types of visual stimulations and effects (Spotify pls don't sue me im writing this from scratch)
- Running BPM
- Scale - major vs minor vs nonscalar vs pentatonic vs etc
- Rhythm - house vs techno vs trap vs etc
- Danceability - chill or bouncy
- Density - atmospheric vs empty/sparse example Classical Music Ensembles vs Tech House 

## High Level Modules - Engines
- Audio Profile
- FFT Engine
- Color Maps
- 2D animations
- 3D animations

## Low Level Modules - Effects
 - Not sure how I would decsribed it. Frequency-driven video playback speed control. Had an idea after seeing @stevemcfarlanedesign advertisement on IG. He has this visuals package called AcidPack that looks like neon lava lamp blobs that move around and get squished and the whole things is looped. Would look cool if the frames would play at a certain speed, but would slow down in a smooth and controlled way every time the kick of the song hit.

 # Things I want to do but would need big brain ML
- Determine what 'vibe' the song is. Would be so cool if it could determine if someone would light up a joint, do homework, or get married to a particular song. As a human, you can hear a song and almost immediately tell what the mood of that song. There are key characteristics of that song with rhythm
