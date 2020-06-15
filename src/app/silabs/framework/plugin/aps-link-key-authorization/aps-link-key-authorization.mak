# aps-link-key-authorization.mak

# The Makefile variables at the top should be able to be generic.  The 
# intention is they are only used to construct unique variables that the main
# Makefile will pull in.

# The variables are made generic in their name so this file can be 
# copy/pasted by other plugins to replicate the behavior and changing
# only a few items.

# Add the name of the plugin.
PLUGIN_NAME := aps-link-key-authorization

# Creating unique test name.
# Note: No need to change this line.
PLUGIN_TEST_NAME:= $(PLUGIN_PREFIX)$(PLUGIN_NAME)-test

# List the test files here.
# Must be relative to $ZNET root
$(PLUGIN_TEST_NAME)_FILES := \
  $(AFV2_TEST_FRAMEWORK_FILES) \
  app/framework/util/attribute-size.c \
  app/framework/util/message.c \
  app/framework/util/print-formatter.c   \
  app/framework/plugin/aps-link-key-authorization/aps-link-key-authorization.c \
  app/framework/plugin/aps-link-key-authorization/aps-link-key-authorization-test.c \

# List plugin test steps here.
$(PLUGIN_TEST_NAME)_TEST_STEPS := \
  empty-list-test \
  enable-authorization-test \
  add-query-remove-exemption-test

# Needs to add this test to the global plugin test list.
# Note: No need to change this line.
PLUGIN_TEST_LIST += $(PLUGIN_TEST_NAME)

# Including dependencies
# Note: No need to change the following lines.
ifneq (($MAKECMDGOALS),clean)
  -include $($(PLUGIN_TEST_NAME)_FILES:.c=.d)
endif
