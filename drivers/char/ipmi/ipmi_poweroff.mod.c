#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xe6af07fa, "module_layout" },
	{ 0x58a1b98b, "param_get_int" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xa8181adf, "proc_dointvec" },
	{ 0xcc6f4a0c, "ipmi_smi_watcher_unregister" },
	{ 0x6be0d38b, "unregister_sysctl_table" },
	{ 0x2e39c545, "ipmi_smi_watcher_register" },
	{ 0xf97d7de2, "register_sysctl_table" },
	{ 0xb9ff77a, "param_set_int" },
	{ 0xc4d9f382, "ipmi_create_user" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x27e1a049, "printk" },
	{ 0xf5531bea, "ipmi_poll_interface" },
	{ 0x4bb8e67e, "ipmi_request_supply_msgs" },
	{ 0x60a32ea9, "pm_power_off" },
	{ 0xf388b18b, "ipmi_destroy_user" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x29361773, "complete" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ipmi_msghandler";


MODULE_INFO(srcversion, "65FBB8DAADCF8A5B8996E74");
MODULE_INFO(rhelversion, "8.0");
