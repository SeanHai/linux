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
	{ 0xe93e49c3, "devres_free" },
	{ 0x6a7082a, "iio_kfifo_allocate" },
	{ 0xf46aaa47, "devres_alloc_node" },
	{ 0x1e56b3e3, "devm_iio_device_match" },
	{ 0x63540896, "iio_triggered_buffer_postenable" },
	{ 0xd7f24493, "iio_device_attach_buffer" },
	{ 0x891d06a0, "devres_release" },
	{ 0x43890567, "iio_triggered_buffer_predisable" },
	{ 0xc6980f17, "iio_kfifo_free" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd03ba39a, "devres_add" },
	{ 0x5d442f41, "iio_alloc_pollfunc" },
	{ 0x4bf051e9, "iio_dealloc_pollfunc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "E6C701783AF27252026FF9B");
MODULE_INFO(rhelversion, "8.0");
