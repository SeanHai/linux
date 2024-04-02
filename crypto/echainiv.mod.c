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
	{ 0x104d459d, "crypto_unregister_template" },
	{ 0x3a06d7e3, "crypto_register_template" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xfb578fc5, "memset" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x845dbf3b, "scatterwalk_map_and_copy" },
	{ 0xa26368ed, "aead_register_instance" },
	{ 0x88883000, "aead_exit_geniv" },
	{ 0x9d67f7a9, "aead_init_geniv" },
	{ 0xcb88094e, "aead_geniv_alloc" },
	{ 0xb2c031b0, "aead_geniv_free" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "D1A381BD8A80449CFFA7222");
MODULE_INFO(rhelversion, "8.0");
