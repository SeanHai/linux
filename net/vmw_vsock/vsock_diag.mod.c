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
	{ 0x41ee8ccc, "sock_diag_unregister" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xb29c9658, "sock_i_ino" },
	{ 0xb8a9fc36, "sock_diag_register" },
	{ 0x9bb6fd09, "vsock_connected_table" },
	{ 0x284e07d8, "vsock_bind_table" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf60e31a1, "sock_diag_save_cookie" },
	{ 0xc92f7f50, "vsock_table_lock" },
	{ 0xa005abe, "__nlmsg_put" },
	{ 0xfe3ac6f4, "__netlink_dump_start" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=vsock";


MODULE_INFO(srcversion, "297FC2433F03B4FEF8674A2");
MODULE_INFO(rhelversion, "8.0");
