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
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x66f221d7, "skcipher_walk_done" },
	{ 0xd986dad1, "kernel_fpu_begin" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0xb4906fc3, "skcipher_walk_virt" },
	{ 0x38722f80, "kernel_fpu_end" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5bd7d774, "skcipher_walk_atomise" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "D7BFA31ADEF36B24B5A31BD");
MODULE_INFO(rhelversion, "8.0");
