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
	{ 0x1ea9340b, "request_key" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xea2b701b, "up_read" },
	{ 0x754d539c, "strlen" },
	{ 0x62a539ea, "prepare_kernel_cred" },
	{ 0x41715c18, "seq_puts" },
	{ 0xc41033c1, "seq_printf" },
	{ 0x9799631f, "generic_key_instantiate" },
	{ 0x7c62e0b2, "user_read" },
	{ 0x38c10854, "override_creds" },
	{ 0x91185511, "down_read" },
	{ 0x45ae73fa, "key_validate" },
	{ 0xee3724a1, "key_revoke" },
	{ 0x60ea2d6, "kstrtoull" },
	{ 0xf7d6636f, "current_task" },
	{ 0x27e1a049, "printk" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0xa07a37f0, "memchr" },
	{ 0x3581fe70, "key_put" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x96b29254, "strncasecmp" },
	{ 0xecb1c289, "__put_cred" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb10ab720, "keyring_alloc" },
	{ 0x53a840b3, "register_key_type" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x9b28cc96, "unregister_key_type" },
	{ 0xd63def60, "user_revoke" },
	{ 0x8f648a94, "param_ops_uint" },
	{ 0x830c79b3, "user_destroy" },
	{ 0x94060554, "revert_creds" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "7AE260956B8DD39F0EF0D6C");
MODULE_INFO(rhelversion, "8.0");
