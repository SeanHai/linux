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
	{ 0x373ba864, "release_sock" },
	{ 0x402b8281, "__request_module" },
	{ 0xccf1691f, "ppp_unregister_channel" },
	{ 0x55996b98, "lock_sock_nested" },
	{ 0x1eb76e2a, "module_put" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xa80c15d5, "sock_register" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x9a70d9ae, "ppp_channel_index" },
	{ 0x85075cb1, "try_module_get" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ppp_generic";


MODULE_INFO(srcversion, "AE5CA6CC1268600EBE6BAB5");
MODULE_INFO(rhelversion, "8.0");
