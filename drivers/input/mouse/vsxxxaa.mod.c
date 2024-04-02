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
	{ 0x56484ccc, "serio_unregister_driver" },
	{ 0xd4a683b9, "__serio_register_driver" },
	{ 0xdc75c81f, "input_free_device" },
	{ 0xf789deff, "input_register_device" },
	{ 0x1c2af421, "serio_open" },
	{ 0x822030b4, "input_set_abs_params" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xd55379f7, "input_allocate_device" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x28318305, "snprintf" },
	{ 0x5792f848, "strlcpy" },
	{ 0xfe7843b, "input_event" },
	{ 0xb0e602eb, "memmove" },
	{ 0x27e1a049, "printk" },
	{ 0x37a0cba, "kfree" },
	{ 0xda0e8aec, "input_unregister_device" },
	{ 0x947f7953, "serio_close" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("serio:ty02pr08id*ex*");

MODULE_INFO(srcversion, "F112F9041E6DCA1302F90A5");
MODULE_INFO(rhelversion, "8.0");
