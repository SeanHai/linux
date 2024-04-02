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
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x80d68d3e, "fb_register_client" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0xe93e49c3, "devres_free" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x91715312, "sprintf" },
	{ 0xf46aaa47, "devres_alloc_node" },
	{ 0x60ea2d6, "kstrtoull" },
	{ 0xd257960c, "device_register" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x891d06a0, "devres_release" },
	{ 0xd0c86c05, "put_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd03ba39a, "devres_add" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xa047947, "class_destroy" },
	{ 0xb12cbacb, "fb_unregister_client" },
	{ 0x6ecae48b, "device_unregister" },
	{ 0x76ca9e4e, "dev_set_name" },
	{ 0xce2ba1bd, "__class_create" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "4940D923C81D67DCD6CB1F9");
MODULE_INFO(rhelversion, "8.0");
