all: push

push:
	git add --all
	git commit -m "$(shell date)"
	git push