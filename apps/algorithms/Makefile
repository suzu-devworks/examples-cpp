SUBDIRS := \
	sorting

.PHONY: all 
all: $(SUBDIRS)

.PHONY: clean
clean: $(SUBDIRS)

.PHONY: $(SUBDIRS)
$(SUBDIRS): 
	$(MAKE) $(MAKECMDGOALS) -C $@ 
