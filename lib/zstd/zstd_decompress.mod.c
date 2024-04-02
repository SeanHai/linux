#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
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
	{ 0x3f0eabd2, "xxh64_update" },
	{ 0x658ce1a8, "xxh64_reset" },
	{ 0xfb578fc5, "memset" },
	{ 0xe32ab4d8, "xxh64_digest" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x69acdf38, "memcpy" },
	{ 0xb0e602eb, "memmove" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=xxhash";


MODULE_INFO(srcversion, "AFA008CF41FB28C9B662AC1");
MODULE_INFO(rhelversion, "8.0");
