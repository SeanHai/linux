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
	{ 0x80d5e57a, "mpi_free" },
	{ 0x69ef92d, "crypto_register_kpp" },
	{ 0xd774957d, "mpi_write_to_sgl" },
	{ 0x3224b2a9, "mpi_read_raw_from_sgl" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0x98503a63, "mpi_alloc" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9fe939e1, "mpi_powm" },
	{ 0x69acdf38, "memcpy" },
	{ 0xceb1f126, "mpi_read_raw_data" },
	{ 0x146a479a, "crypto_unregister_kpp" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "0AC8C103B0C67DA13EEA0FE");
MODULE_INFO(rhelversion, "8.0");
