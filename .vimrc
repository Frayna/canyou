set number
syntax on
set background=light
set mouse=a
set colorcolumn=80
set autoindent
set smartindent
set noerrorbells
set nohlsearch
set ruler
"set cursorcolumn
inoremap ( ()<left>
inoremap " ""<left>
inoremap [ []<left>
inoremap { {}<left><return><esc>ko
inoremap ' ''<left>
highlight Error ctermbg=darkblue guibg=darkblue
match Error /\s\+$/
"2match Error /[ ][ ]\+/
