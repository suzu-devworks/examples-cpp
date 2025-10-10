subdirs := \
	sorting \

.PHONY: all 
all: $(subdirs)

.PHONY: clean
clean: $(subdirs)

.PHONY: $(subdirs)
$(subdirs): 
	$(MAKE) $(MAKECMDGOALS) -C $@ 
