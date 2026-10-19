make
make clean

if ! [ -e "tests_actual" ]
then
	mkdir "tests_actual"
fi
ft_files="ft_atoi ft_bzero ft_calloc ft_isalnum ft_isalpha ft_isascii ft_isdigit ft_isprint ft_itoa ft_lstadd_back ft_lstadd_front ft_lstclear ft_lstdelone ft_lstiter ft_lstlast ft_lstmap ft_lstnew ft_lstsize ft_memchr ft_memcmp ft_memcpy ft_memmove ft_memset ft_split ft_strchr ft_strdup ft_striteri ft_strjoin ft_strlcat ft_strlcpy ft_strlen ft_strmapi ft_strncmp ft_strnstr ft_strrchr ft_strtrim ft_substr ft_tolower ft_toupper"
for file in $ft_files; do
	if [ -e "tests/test_$file.c" ]
	then
		cc -Wall -Wextra -Werror "tests/test_$file.c" libft.a
		./a.out > "tests_actual/test_$file.txt"
		if ! [ -e "tests_true/test_$file.txt" ]
		then
			echo "no existing test, creating new one from output"
			./a.out > "tests_true/test_$file.txt"
		fi
		if ! cmp -s "tests_true/test_$file.txt" "tests_actual/test_$file.txt"
		then
			echo "---"
			echo "TEST FAILED"
			echo "$file failed"
			echo "---"
		else
			echo "test_$file succeeded"
		fi
	else
		echo "test for $file does not exist"
	fi
done
